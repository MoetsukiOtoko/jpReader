////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2021 Ripose
//
// This file is part of Memento.
//
// Memento is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 of the License.
//
// Memento is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Memento.  If not, see <https://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <QList>
#include <QReadWriteLock>
#include <QString>
#include <QThread>

#include "expression.h"

namespace MeCab
{
    class Tagger;
    class Lattice;
}

class DatabaseManager;
struct SearchPair;

/**
 * The intended API for interacting with the database.
 */
class Dictionary : public QObject
{
    Q_OBJECT

public:
    Dictionary(QObject *parent = nullptr);
    ~Dictionary();

    /**
     * Searches for all terms in the query.
     * @param query        The query to look for terms in. Only matches terms
     *                     that start from the beginning of the query.
     * @param subtitle     The subtitle the query appears in.
     * @param index        The index into the subtitle where the query begins.
     * @param currentIndex A pointer to the current index. If this value is no
     *                     different from the index before this method is done,
     *                     the search is aborted.
     * @return A list of all the terms found, nullptr if the search was aborted.
     *         Belongs to the caller.
     */
    SharedTermList searchTerms(
        const QString query,
        const QString subtitle,
        const int index,
        const int *currentIndex);

    /**
     * Searches for a single kanji.
     * @param character The kanji to search for. Should be a single character.
     * @return A kanji containing all the information that was found.
     */
    SharedKanji searchKanji(const QString character);

    /**
     * Adds a dictionary.
     * @param path The path to the dictionary.
     * @return Empty string on success, error string on error.
     */
    QString addDictionary(const QString &path);

    /**
     * Adds multiple dictionaries.
     * @param paths The paths to the dictionaries.
     * @return Empty string on success, error string on error.
     */
    QString addDictionary(const QStringList &paths);

    /**
     * Deletes a dictionary.
     * @param name The name of the dictionary.
     * @return Empty string on success, error string on error.
     */
    QString deleteDictionary(const QString &name);

    /**
     * Sets the set of disabled dictionaries to the provided list.
     * @param dictionaries The list of dictionaries.
     * @return Empty string on success, error string on error.
     */
    QString disableDictionaries(const QStringList &dictionaries);

    /**
     * Gets a list of dictionaries ordered by user preference.
     * @return A list of dictionaries ordered by user preference.
     */
    QStringList getDictionaries();

    /**
     * Gets the list of disabled dictionaries.
     * @return The names of all disabled dictionaries.
     */
    QStringList getDisabledDictionaries();

private Q_SLOTS:
    /**
     * Populates the dictionary order map.
     */
    void initDictionaryOrder();

private:
    /**
     * Uses MeCab to generate a list of non-exact queries.
     * @param query The raw query.
     * @return A list of search pairs.
     */
    QList<SearchPair> generateQueries(const QString &query);

    /**
     * Sorts tag by descending order, breaking ties on ascending score.
     * @param[out] tags The list of tags to sort.
     */
    void sortTags(QList<Tag> &tags);

    /* The DatabaseManager. */
    DatabaseManager *m_db;

    /* The object used for interacting with MeCab. */
    MeCab::Tagger *m_tagger;

    /* Contains dictionary priority information. */
    struct DictOrder
    {
        /* Maps dictionary names to priorities. */
        QHash<QString, int> map;

        /* Used for locking for reading and writing. */
        QReadWriteLock lock;
    } m_dicOrder;

    /**
     * Parent class of dictionary worker threads. Used to cut down on duplicated
     * terms.
     */
    class DictionaryWorker : public QThread
    {
    public:
        DictionaryWorker(
            const QString &subtitle,
            const int index,
            const int *currentIndex,
            DatabaseManager &db
        ) : subtitle(subtitle),
            index(index),
            currentIndex(currentIndex),
            db(db) {}

        /* Found terms will be in this list */
        QList<SharedTerm> terms;

    protected:
        /* The current subtitle */
        const QString &subtitle;

        /* The index into the subtitle */
        const int index;

        /* A reference to the current index */
        const int *currentIndex;

        /* A reference to the database */
        DatabaseManager &db;
    };

    /**
     * Worker thread for querying the term database for exact substrings of the
     * query.
     */
    class ExactWorker : public Dictionary::DictionaryWorker
    {
    public:
        /**
         * Creates a worker thread for finding exact matches against the query.
         * Does so by chopping off the last character of the query until
         * endSize is reached.
         * @param query        The query to look for terms in.
         * @param endSize      The smallest size a query can reach (exclusive)
         *                     before searching ceases.
         * @param subtitle     The subtitle the query appears in.
         * @param index        The index into the subtitle where the query
         *                     begins.
         * @param currentIndex A pointer to the current index. If this value is
         *                     no different from the index before this method is
         *                     done, the search is aborted.
         * @param db           The database manager.
         */
        ExactWorker(
            const QString &query,
            const int endSize,
            const QString &subtitle,
            const int index,
            const int *currentIndex,
            DatabaseManager &db
        ) : Dictionary::DictionaryWorker(
                subtitle,
                index,
                currentIndex,
                db
            ),
            query(query),
            endSize(endSize) {}

        void run() override;

    private:
        /* The query string */
        QString query;

        /* The final size of the query. When the query reaches this size, the
         * thread terminates. */
        const int endSize;
    };

    /**
     * Worker thread for querying the term database for MeCab generated queries.
     */
    class MeCabWorker : public Dictionary::DictionaryWorker
    {
    public:
        /**
         * Creates a worker thread for finding MeCab queries.
         * @param begin        An iterator pointing to the first query to search
         *                     (inclusive).
         * @param end          An iterator pointing to the largest query to
         *                     search (exclusive).
         *                     before searching ceases.
         * @param subtitle     The subtitle the query appears in.
         * @param index        The index into the subtitle where the query
         *                     begins.
         * @param currentIndex A pointer to the current index. If this value is
         *                     no different from the index before this method is
         *                     done, the search is aborted.
         * @param db           The database manager.
         */
        MeCabWorker(
            QList<SearchPair>::const_iterator begin,
            QList<SearchPair>::const_iterator end,
            const QString &subtitle,
            const int index,
            const int *currentIndex,
            DatabaseManager &db
        ) : Dictionary::DictionaryWorker(
                subtitle,
                index,
                currentIndex,
                db
            ),
            begin(begin),
            end(end) {}

        void run() override;

    private:
        /* Start and end iterators to queries */
        QList<SearchPair>::const_iterator begin, end;
    };
};

#endif // DICTIONARY_H
