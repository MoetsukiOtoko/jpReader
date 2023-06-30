/****************************************************************************
** Meta object code from reading C++ file 'globalmediator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../util/globalmediator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalmediator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalMediator_t {
    QByteArrayData data[126];
    char stringdata0[2189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalMediator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalMediator_t qt_meta_stringdata_GlobalMediator = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GlobalMediator"
QT_MOC_LITERAL(1, 15, 17), // "sendHideRequested"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "sendShowRequested"
QT_MOC_LITERAL(4, 52, 30), // "sendSelectedTextAudioRequested"
QT_MOC_LITERAL(5, 83, 29), // "sendFFXIVAutoCaptureRequested"
QT_MOC_LITERAL(6, 113, 24), // "sendAreaCaptureRequested"
QT_MOC_LITERAL(7, 138, 24), // "sendTranslationRequested"
QT_MOC_LITERAL(8, 163, 18), // "sendHideDefinition"
QT_MOC_LITERAL(9, 182, 28), // "sendTranslationButtonPressed"
QT_MOC_LITERAL(10, 211, 17), // "sendJpTextChanged"
QT_MOC_LITERAL(11, 229, 7), // "newtext"
QT_MOC_LITERAL(12, 237, 15), // "sendKanaClicked"
QT_MOC_LITERAL(13, 253, 4), // "kana"
QT_MOC_LITERAL(14, 258, 15), // "sendTermClicked"
QT_MOC_LITERAL(15, 274, 4), // "term"
QT_MOC_LITERAL(16, 279, 13), // "sendShuttdown"
QT_MOC_LITERAL(17, 293, 16), // "sendCloseOptions"
QT_MOC_LITERAL(18, 310, 15), // "sendChangeTheme"
QT_MOC_LITERAL(19, 326, 26), // "sendSubstringButtonPressed"
QT_MOC_LITERAL(20, 353, 5), // "index"
QT_MOC_LITERAL(21, 359, 15), // "showInformation"
QT_MOC_LITERAL(22, 375, 5), // "title"
QT_MOC_LITERAL(23, 381, 7), // "content"
QT_MOC_LITERAL(24, 389, 12), // "showCritical"
QT_MOC_LITERAL(25, 402, 10), // "keyPressed"
QT_MOC_LITERAL(26, 413, 10), // "QKeyEvent*"
QT_MOC_LITERAL(27, 424, 5), // "event"
QT_MOC_LITERAL(28, 430, 10), // "wheelMoved"
QT_MOC_LITERAL(29, 441, 18), // "const QWheelEvent*"
QT_MOC_LITERAL(30, 460, 18), // "windowFocusChanged"
QT_MOC_LITERAL(31, 479, 7), // "inFocus"
QT_MOC_LITERAL(32, 487, 19), // "playerTracksChanged"
QT_MOC_LITERAL(33, 507, 19), // "QList<const Track*>"
QT_MOC_LITERAL(34, 527, 6), // "tracks"
QT_MOC_LITERAL(35, 534, 21), // "playerChaptersChanged"
QT_MOC_LITERAL(36, 556, 13), // "QList<double>"
QT_MOC_LITERAL(37, 570, 8), // "chapters"
QT_MOC_LITERAL(38, 579, 23), // "playerAudioTrackChanged"
QT_MOC_LITERAL(39, 603, 7), // "int64_t"
QT_MOC_LITERAL(40, 611, 2), // "id"
QT_MOC_LITERAL(41, 614, 23), // "playerVideoTrackChanged"
QT_MOC_LITERAL(42, 638, 26), // "playerSubtitleTrackChanged"
QT_MOC_LITERAL(43, 665, 32), // "playerSecondSubtitleTrackChanged"
QT_MOC_LITERAL(44, 698, 19), // "playerAudioDisabled"
QT_MOC_LITERAL(45, 718, 19), // "playerVideoDisabled"
QT_MOC_LITERAL(46, 738, 23), // "playerSubtitlesDisabled"
QT_MOC_LITERAL(47, 762, 29), // "playerSecondSubtitlesDisabled"
QT_MOC_LITERAL(48, 792, 21), // "playerSubtitleChanged"
QT_MOC_LITERAL(49, 814, 8), // "subtitle"
QT_MOC_LITERAL(50, 823, 5), // "start"
QT_MOC_LITERAL(51, 829, 3), // "end"
QT_MOC_LITERAL(52, 833, 5), // "delay"
QT_MOC_LITERAL(53, 839, 24), // "playerSubtitleChangedRaw"
QT_MOC_LITERAL(54, 864, 24), // "playerSecSubtitleChanged"
QT_MOC_LITERAL(55, 889, 21), // "playerSubDelayChanged"
QT_MOC_LITERAL(56, 911, 21), // "playerDurationChanged"
QT_MOC_LITERAL(57, 933, 5), // "value"
QT_MOC_LITERAL(58, 939, 21), // "playerPositionChanged"
QT_MOC_LITERAL(59, 961, 23), // "playerPauseStateChanged"
QT_MOC_LITERAL(60, 985, 6), // "paused"
QT_MOC_LITERAL(61, 992, 23), // "playerFullscreenChanged"
QT_MOC_LITERAL(62, 1016, 4), // "full"
QT_MOC_LITERAL(63, 1021, 22), // "playerMaxVolumeChanged"
QT_MOC_LITERAL(64, 1044, 19), // "playerVolumeChanged"
QT_MOC_LITERAL(65, 1064, 18), // "playerTitleChanged"
QT_MOC_LITERAL(66, 1083, 17), // "playerFileChanged"
QT_MOC_LITERAL(67, 1101, 4), // "path"
QT_MOC_LITERAL(68, 1106, 16), // "playerMouseMoved"
QT_MOC_LITERAL(69, 1123, 16), // "playerFileLoaded"
QT_MOC_LITERAL(70, 1140, 5), // "width"
QT_MOC_LITERAL(71, 1146, 6), // "height"
QT_MOC_LITERAL(72, 1153, 12), // "playerClosed"
QT_MOC_LITERAL(73, 1166, 13), // "playerResized"
QT_MOC_LITERAL(74, 1180, 19), // "ankiSettingsChanged"
QT_MOC_LITERAL(75, 1200, 26), // "audioSourceSettingsChanged"
QT_MOC_LITERAL(76, 1227, 23), // "behaviorSettingsChanged"
QT_MOC_LITERAL(77, 1251, 21), // "searchSettingsChanged"
QT_MOC_LITERAL(78, 1273, 24), // "interfaceSettingsChanged"
QT_MOC_LITERAL(79, 1298, 18), // "ocrSettingsChanged"
QT_MOC_LITERAL(80, 1317, 29), // "menuSubtitleVisibilityToggled"
QT_MOC_LITERAL(81, 1347, 7), // "visible"
QT_MOC_LITERAL(82, 1355, 24), // "menuSubtitleSizeIncrease"
QT_MOC_LITERAL(83, 1380, 24), // "menuSubtitleSizeDecrease"
QT_MOC_LITERAL(84, 1405, 19), // "menuSubtitlesMoveUp"
QT_MOC_LITERAL(85, 1425, 21), // "menuSubtitlesMoveDown"
QT_MOC_LITERAL(86, 1447, 16), // "menuEnterOCRMode"
QT_MOC_LITERAL(87, 1464, 15), // "menuShowOptions"
QT_MOC_LITERAL(88, 1480, 13), // "menuShowAbout"
QT_MOC_LITERAL(89, 1494, 12), // "controlsPlay"
QT_MOC_LITERAL(90, 1507, 13), // "controlsPause"
QT_MOC_LITERAL(91, 1521, 19), // "controlsSeekForward"
QT_MOC_LITERAL(92, 1541, 20), // "controlsSeekBackward"
QT_MOC_LITERAL(93, 1562, 19), // "controlsSkipForward"
QT_MOC_LITERAL(94, 1582, 20), // "controlsSkipBackward"
QT_MOC_LITERAL(95, 1603, 14), // "controlsHidden"
QT_MOC_LITERAL(96, 1618, 13), // "controlsShown"
QT_MOC_LITERAL(97, 1632, 27), // "controlsSubtitleListToggled"
QT_MOC_LITERAL(98, 1660, 18), // "controlsOCRToggled"
QT_MOC_LITERAL(99, 1679, 23), // "controlsPositionChanged"
QT_MOC_LITERAL(100, 1703, 21), // "controlsVolumeChanged"
QT_MOC_LITERAL(101, 1725, 25), // "controlsFullscreenChanged"
QT_MOC_LITERAL(102, 1751, 20), // "windowOSCStateCycled"
QT_MOC_LITERAL(103, 1772, 12), // "termsChanged"
QT_MOC_LITERAL(104, 1785, 14), // "SharedTermList"
QT_MOC_LITERAL(105, 1800, 5), // "terms"
QT_MOC_LITERAL(106, 1806, 11), // "SharedKanji"
QT_MOC_LITERAL(107, 1818, 5), // "kanji"
QT_MOC_LITERAL(108, 1824, 15), // "subtitleExpired"
QT_MOC_LITERAL(109, 1840, 14), // "subtitleHidden"
QT_MOC_LITERAL(110, 1855, 17), // "definitionsHidden"
QT_MOC_LITERAL(111, 1873, 16), // "definitionsShown"
QT_MOC_LITERAL(112, 1890, 18), // "subtitleListHidden"
QT_MOC_LITERAL(113, 1909, 17), // "subtitleListShown"
QT_MOC_LITERAL(114, 1927, 18), // "searchWidgetHidden"
QT_MOC_LITERAL(115, 1946, 17), // "searchWidgetShown"
QT_MOC_LITERAL(116, 1964, 19), // "searchWidgetRequest"
QT_MOC_LITERAL(117, 1984, 5), // "query"
QT_MOC_LITERAL(118, 1990, 19), // "dictionariesChanged"
QT_MOC_LITERAL(119, 2010, 22), // "dictionaryOrderChanged"
QT_MOC_LITERAL(120, 2033, 25), // "requestSubtitleVisibility"
QT_MOC_LITERAL(121, 2059, 31), // "requestSubtitleWidgetVisibility"
QT_MOC_LITERAL(122, 2091, 29), // "requestSubtitleListVisibility"
QT_MOC_LITERAL(123, 2121, 23), // "requestSearchVisibility"
QT_MOC_LITERAL(124, 2145, 23), // "requestDefinitionDelete"
QT_MOC_LITERAL(125, 2169, 19) // "requestThemeRefresh"

    },
    "GlobalMediator\0sendHideRequested\0\0"
    "sendShowRequested\0sendSelectedTextAudioRequested\0"
    "sendFFXIVAutoCaptureRequested\0"
    "sendAreaCaptureRequested\0"
    "sendTranslationRequested\0sendHideDefinition\0"
    "sendTranslationButtonPressed\0"
    "sendJpTextChanged\0newtext\0sendKanaClicked\0"
    "kana\0sendTermClicked\0term\0sendShuttdown\0"
    "sendCloseOptions\0sendChangeTheme\0"
    "sendSubstringButtonPressed\0index\0"
    "showInformation\0title\0content\0"
    "showCritical\0keyPressed\0QKeyEvent*\0"
    "event\0wheelMoved\0const QWheelEvent*\0"
    "windowFocusChanged\0inFocus\0"
    "playerTracksChanged\0QList<const Track*>\0"
    "tracks\0playerChaptersChanged\0QList<double>\0"
    "chapters\0playerAudioTrackChanged\0"
    "int64_t\0id\0playerVideoTrackChanged\0"
    "playerSubtitleTrackChanged\0"
    "playerSecondSubtitleTrackChanged\0"
    "playerAudioDisabled\0playerVideoDisabled\0"
    "playerSubtitlesDisabled\0"
    "playerSecondSubtitlesDisabled\0"
    "playerSubtitleChanged\0subtitle\0start\0"
    "end\0delay\0playerSubtitleChangedRaw\0"
    "playerSecSubtitleChanged\0playerSubDelayChanged\0"
    "playerDurationChanged\0value\0"
    "playerPositionChanged\0playerPauseStateChanged\0"
    "paused\0playerFullscreenChanged\0full\0"
    "playerMaxVolumeChanged\0playerVolumeChanged\0"
    "playerTitleChanged\0playerFileChanged\0"
    "path\0playerMouseMoved\0playerFileLoaded\0"
    "width\0height\0playerClosed\0playerResized\0"
    "ankiSettingsChanged\0audioSourceSettingsChanged\0"
    "behaviorSettingsChanged\0searchSettingsChanged\0"
    "interfaceSettingsChanged\0ocrSettingsChanged\0"
    "menuSubtitleVisibilityToggled\0visible\0"
    "menuSubtitleSizeIncrease\0"
    "menuSubtitleSizeDecrease\0menuSubtitlesMoveUp\0"
    "menuSubtitlesMoveDown\0menuEnterOCRMode\0"
    "menuShowOptions\0menuShowAbout\0"
    "controlsPlay\0controlsPause\0"
    "controlsSeekForward\0controlsSeekBackward\0"
    "controlsSkipForward\0controlsSkipBackward\0"
    "controlsHidden\0controlsShown\0"
    "controlsSubtitleListToggled\0"
    "controlsOCRToggled\0controlsPositionChanged\0"
    "controlsVolumeChanged\0controlsFullscreenChanged\0"
    "windowOSCStateCycled\0termsChanged\0"
    "SharedTermList\0terms\0SharedKanji\0kanji\0"
    "subtitleExpired\0subtitleHidden\0"
    "definitionsHidden\0definitionsShown\0"
    "subtitleListHidden\0subtitleListShown\0"
    "searchWidgetHidden\0searchWidgetShown\0"
    "searchWidgetRequest\0query\0dictionariesChanged\0"
    "dictionaryOrderChanged\0requestSubtitleVisibility\0"
    "requestSubtitleWidgetVisibility\0"
    "requestSubtitleListVisibility\0"
    "requestSearchVisibility\0requestDefinitionDelete\0"
    "requestThemeRefresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalMediator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      92,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      92,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  474,    2, 0x06 /* Public */,
       3,    0,  475,    2, 0x06 /* Public */,
       4,    0,  476,    2, 0x06 /* Public */,
       5,    0,  477,    2, 0x06 /* Public */,
       6,    0,  478,    2, 0x06 /* Public */,
       7,    0,  479,    2, 0x06 /* Public */,
       8,    0,  480,    2, 0x06 /* Public */,
       9,    0,  481,    2, 0x06 /* Public */,
      10,    1,  482,    2, 0x06 /* Public */,
      12,    1,  485,    2, 0x06 /* Public */,
      14,    1,  488,    2, 0x06 /* Public */,
      16,    0,  491,    2, 0x06 /* Public */,
      17,    0,  492,    2, 0x06 /* Public */,
      18,    0,  493,    2, 0x06 /* Public */,
      19,    1,  494,    2, 0x06 /* Public */,
      21,    2,  497,    2, 0x06 /* Public */,
      24,    2,  502,    2, 0x06 /* Public */,
      25,    1,  507,    2, 0x06 /* Public */,
      28,    1,  510,    2, 0x06 /* Public */,
      30,    1,  513,    2, 0x06 /* Public */,
      32,    1,  516,    2, 0x06 /* Public */,
      35,    1,  519,    2, 0x06 /* Public */,
      38,    1,  522,    2, 0x06 /* Public */,
      41,    1,  525,    2, 0x06 /* Public */,
      42,    1,  528,    2, 0x06 /* Public */,
      43,    1,  531,    2, 0x06 /* Public */,
      44,    0,  534,    2, 0x06 /* Public */,
      45,    0,  535,    2, 0x06 /* Public */,
      46,    0,  536,    2, 0x06 /* Public */,
      47,    0,  537,    2, 0x06 /* Public */,
      48,    4,  538,    2, 0x06 /* Public */,
      53,    4,  547,    2, 0x06 /* Public */,
      54,    4,  556,    2, 0x06 /* Public */,
      55,    1,  565,    2, 0x06 /* Public */,
      56,    1,  568,    2, 0x06 /* Public */,
      58,    1,  571,    2, 0x06 /* Public */,
      59,    1,  574,    2, 0x06 /* Public */,
      61,    1,  577,    2, 0x06 /* Public */,
      63,    1,  580,    2, 0x06 /* Public */,
      64,    1,  583,    2, 0x06 /* Public */,
      65,    1,  586,    2, 0x06 /* Public */,
      66,    1,  589,    2, 0x06 /* Public */,
      68,    0,  592,    2, 0x06 /* Public */,
      69,    2,  593,    2, 0x06 /* Public */,
      72,    0,  598,    2, 0x06 /* Public */,
      73,    0,  599,    2, 0x06 /* Public */,
      74,    0,  600,    2, 0x06 /* Public */,
      75,    0,  601,    2, 0x06 /* Public */,
      76,    0,  602,    2, 0x06 /* Public */,
      77,    0,  603,    2, 0x06 /* Public */,
      78,    0,  604,    2, 0x06 /* Public */,
      79,    0,  605,    2, 0x06 /* Public */,
      80,    1,  606,    2, 0x06 /* Public */,
      82,    0,  609,    2, 0x06 /* Public */,
      83,    0,  610,    2, 0x06 /* Public */,
      84,    0,  611,    2, 0x06 /* Public */,
      85,    0,  612,    2, 0x06 /* Public */,
      86,    0,  613,    2, 0x06 /* Public */,
      87,    0,  614,    2, 0x06 /* Public */,
      88,    0,  615,    2, 0x06 /* Public */,
      89,    0,  616,    2, 0x06 /* Public */,
      90,    0,  617,    2, 0x06 /* Public */,
      91,    0,  618,    2, 0x06 /* Public */,
      92,    0,  619,    2, 0x06 /* Public */,
      93,    0,  620,    2, 0x06 /* Public */,
      94,    0,  621,    2, 0x06 /* Public */,
      95,    0,  622,    2, 0x06 /* Public */,
      96,    0,  623,    2, 0x06 /* Public */,
      97,    0,  624,    2, 0x06 /* Public */,
      98,    0,  625,    2, 0x06 /* Public */,
      99,    1,  626,    2, 0x06 /* Public */,
     100,    1,  629,    2, 0x06 /* Public */,
     101,    1,  632,    2, 0x06 /* Public */,
     102,    0,  635,    2, 0x06 /* Public */,
     103,    2,  636,    2, 0x06 /* Public */,
     108,    0,  641,    2, 0x06 /* Public */,
     109,    0,  642,    2, 0x06 /* Public */,
     110,    0,  643,    2, 0x06 /* Public */,
     111,    0,  644,    2, 0x06 /* Public */,
     112,    0,  645,    2, 0x06 /* Public */,
     113,    0,  646,    2, 0x06 /* Public */,
     114,    0,  647,    2, 0x06 /* Public */,
     115,    0,  648,    2, 0x06 /* Public */,
     116,    1,  649,    2, 0x06 /* Public */,
     118,    0,  652,    2, 0x06 /* Public */,
     119,    0,  653,    2, 0x06 /* Public */,
     120,    1,  654,    2, 0x06 /* Public */,
     121,    1,  657,    2, 0x06 /* Public */,
     122,    1,  660,    2, 0x06 /* Public */,
     123,    1,  663,    2, 0x06 /* Public */,
     124,    0,  666,    2, 0x06 /* Public */,
     125,    0,  667,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   23,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   27,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,   49,   50,   51,   52,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,   49,   50,   51,   52,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,   49,   50,   51,   52,
    QMetaType::Void, QMetaType::Double,   52,
    QMetaType::Void, QMetaType::Double,   57,
    QMetaType::Void, QMetaType::Double,   57,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, 0x80000000 | 39,   57,
    QMetaType::Void, 0x80000000 | 39,   57,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   70,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 104, 0x80000000 | 106,  105,  107,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  117,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GlobalMediator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalMediator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendHideRequested(); break;
        case 1: _t->sendShowRequested(); break;
        case 2: _t->sendSelectedTextAudioRequested(); break;
        case 3: _t->sendFFXIVAutoCaptureRequested(); break;
        case 4: _t->sendAreaCaptureRequested(); break;
        case 5: _t->sendTranslationRequested(); break;
        case 6: _t->sendHideDefinition(); break;
        case 7: _t->sendTranslationButtonPressed(); break;
        case 8: _t->sendJpTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->sendKanaClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->sendTermClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->sendShuttdown(); break;
        case 12: _t->sendCloseOptions(); break;
        case 13: _t->sendChangeTheme(); break;
        case 14: _t->sendSubstringButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->showInformation((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->showCritical((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 18: _t->wheelMoved((*reinterpret_cast< const QWheelEvent*(*)>(_a[1]))); break;
        case 19: _t->windowFocusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->playerTracksChanged((*reinterpret_cast< const QList<const Track*>(*)>(_a[1]))); break;
        case 21: _t->playerChaptersChanged((*reinterpret_cast< QList<double>(*)>(_a[1]))); break;
        case 22: _t->playerAudioTrackChanged((*reinterpret_cast< const int64_t(*)>(_a[1]))); break;
        case 23: _t->playerVideoTrackChanged((*reinterpret_cast< const int64_t(*)>(_a[1]))); break;
        case 24: _t->playerSubtitleTrackChanged((*reinterpret_cast< const int64_t(*)>(_a[1]))); break;
        case 25: _t->playerSecondSubtitleTrackChanged((*reinterpret_cast< const int64_t(*)>(_a[1]))); break;
        case 26: _t->playerAudioDisabled(); break;
        case 27: _t->playerVideoDisabled(); break;
        case 28: _t->playerSubtitlesDisabled(); break;
        case 29: _t->playerSecondSubtitlesDisabled(); break;
        case 30: _t->playerSubtitleChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 31: _t->playerSubtitleChangedRaw((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 32: _t->playerSecSubtitleChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 33: _t->playerSubDelayChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 34: _t->playerDurationChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 35: _t->playerPositionChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 36: _t->playerPauseStateChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 37: _t->playerFullscreenChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 38: _t->playerMaxVolumeChanged((*reinterpret_cast< const int64_t(*)>(_a[1]))); break;
        case 39: _t->playerVolumeChanged((*reinterpret_cast< const int64_t(*)>(_a[1]))); break;
        case 40: _t->playerTitleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->playerFileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->playerMouseMoved(); break;
        case 43: _t->playerFileLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->playerClosed(); break;
        case 45: _t->playerResized(); break;
        case 46: _t->ankiSettingsChanged(); break;
        case 47: _t->audioSourceSettingsChanged(); break;
        case 48: _t->behaviorSettingsChanged(); break;
        case 49: _t->searchSettingsChanged(); break;
        case 50: _t->interfaceSettingsChanged(); break;
        case 51: _t->ocrSettingsChanged(); break;
        case 52: _t->menuSubtitleVisibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->menuSubtitleSizeIncrease(); break;
        case 54: _t->menuSubtitleSizeDecrease(); break;
        case 55: _t->menuSubtitlesMoveUp(); break;
        case 56: _t->menuSubtitlesMoveDown(); break;
        case 57: _t->menuEnterOCRMode(); break;
        case 58: _t->menuShowOptions(); break;
        case 59: _t->menuShowAbout(); break;
        case 60: _t->controlsPlay(); break;
        case 61: _t->controlsPause(); break;
        case 62: _t->controlsSeekForward(); break;
        case 63: _t->controlsSeekBackward(); break;
        case 64: _t->controlsSkipForward(); break;
        case 65: _t->controlsSkipBackward(); break;
        case 66: _t->controlsHidden(); break;
        case 67: _t->controlsShown(); break;
        case 68: _t->controlsSubtitleListToggled(); break;
        case 69: _t->controlsOCRToggled(); break;
        case 70: _t->controlsPositionChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 71: _t->controlsVolumeChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 72: _t->controlsFullscreenChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 73: _t->windowOSCStateCycled(); break;
        case 74: _t->termsChanged((*reinterpret_cast< SharedTermList(*)>(_a[1])),(*reinterpret_cast< SharedKanji(*)>(_a[2]))); break;
        case 75: _t->subtitleExpired(); break;
        case 76: _t->subtitleHidden(); break;
        case 77: _t->definitionsHidden(); break;
        case 78: _t->definitionsShown(); break;
        case 79: _t->subtitleListHidden(); break;
        case 80: _t->subtitleListShown(); break;
        case 81: _t->searchWidgetHidden(); break;
        case 82: _t->searchWidgetShown(); break;
        case 83: _t->searchWidgetRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 84: _t->dictionariesChanged(); break;
        case 85: _t->dictionaryOrderChanged(); break;
        case 86: _t->requestSubtitleVisibility((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 87: _t->requestSubtitleWidgetVisibility((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 88: _t->requestSubtitleListVisibility((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 89: _t->requestSearchVisibility((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 90: _t->requestDefinitionDelete(); break;
        case 91: _t->requestThemeRefresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendHideRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendShowRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendSelectedTextAudioRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendFFXIVAutoCaptureRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendAreaCaptureRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendTranslationRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendHideDefinition)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendTranslationButtonPressed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendJpTextChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendKanaClicked)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendTermClicked)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendShuttdown)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendCloseOptions)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendChangeTheme)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::sendSubstringButtonPressed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(QString , QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::showInformation)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(QString , QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::showCritical)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(QKeyEvent * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::keyPressed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QWheelEvent * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::wheelMoved)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::windowFocusChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QList<const Track*> & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerTracksChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(QList<double> ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerChaptersChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int64_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerAudioTrackChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int64_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerVideoTrackChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int64_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSubtitleTrackChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int64_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSecondSubtitleTrackChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerAudioDisabled)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerVideoDisabled)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSubtitlesDisabled)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSecondSubtitlesDisabled)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & , const double , const double , const double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSubtitleChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & , const double , const double , const double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSubtitleChangedRaw)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & , const double , const double , const double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSecSubtitleChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerSubDelayChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerDurationChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerPositionChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerPauseStateChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerFullscreenChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int64_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerMaxVolumeChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int64_t ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerVolumeChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerTitleChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerFileChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerMouseMoved)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(int , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerFileLoaded)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerClosed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::playerResized)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::ankiSettingsChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::audioSourceSettingsChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::behaviorSettingsChanged)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::searchSettingsChanged)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::interfaceSettingsChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::ocrSettingsChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuSubtitleVisibilityToggled)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuSubtitleSizeIncrease)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuSubtitleSizeDecrease)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuSubtitlesMoveUp)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuSubtitlesMoveDown)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuEnterOCRMode)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuShowOptions)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::menuShowAbout)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsPlay)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsPause)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsSeekForward)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsSeekBackward)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsSkipForward)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsSkipBackward)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsHidden)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsShown)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsSubtitleListToggled)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsOCRToggled)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsPositionChanged)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsVolumeChanged)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::controlsFullscreenChanged)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::windowOSCStateCycled)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(SharedTermList , SharedKanji ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::termsChanged)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::subtitleExpired)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::subtitleHidden)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::definitionsHidden)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::definitionsShown)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::subtitleListHidden)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::subtitleListShown)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::searchWidgetHidden)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::searchWidgetShown)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::searchWidgetRequest)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::dictionariesChanged)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::dictionaryOrderChanged)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::requestSubtitleVisibility)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::requestSubtitleWidgetVisibility)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::requestSubtitleListVisibility)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)(const bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::requestSearchVisibility)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::requestDefinitionDelete)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (GlobalMediator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalMediator::requestThemeRefresh)) {
                *result = 91;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalMediator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalMediator.data,
    qt_meta_data_GlobalMediator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalMediator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalMediator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalMediator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalMediator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    }
    return _id;
}

// SIGNAL 0
void GlobalMediator::sendHideRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GlobalMediator::sendShowRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GlobalMediator::sendSelectedTextAudioRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GlobalMediator::sendFFXIVAutoCaptureRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GlobalMediator::sendAreaCaptureRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GlobalMediator::sendTranslationRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GlobalMediator::sendHideDefinition()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GlobalMediator::sendTranslationButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GlobalMediator::sendJpTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GlobalMediator::sendKanaClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GlobalMediator::sendTermClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GlobalMediator::sendShuttdown()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void GlobalMediator::sendCloseOptions()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GlobalMediator::sendChangeTheme()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void GlobalMediator::sendSubstringButtonPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GlobalMediator::showInformation(QString _t1, QString _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GlobalMediator::showCritical(QString _t1, QString _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GlobalMediator::keyPressed(QKeyEvent * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GlobalMediator::wheelMoved(const QWheelEvent * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GlobalMediator::windowFocusChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GlobalMediator::playerTracksChanged(const QList<const Track*> & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GlobalMediator::playerChaptersChanged(QList<double> _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GlobalMediator::playerAudioTrackChanged(const int64_t _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GlobalMediator::playerVideoTrackChanged(const int64_t _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GlobalMediator::playerSubtitleTrackChanged(const int64_t _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GlobalMediator::playerSecondSubtitleTrackChanged(const int64_t _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GlobalMediator::playerAudioDisabled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void GlobalMediator::playerVideoDisabled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void GlobalMediator::playerSubtitlesDisabled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void GlobalMediator::playerSecondSubtitlesDisabled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void GlobalMediator::playerSubtitleChanged(const QString & _t1, const double _t2, const double _t3, const double _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 30, _a);
}

// SIGNAL 31
void GlobalMediator::playerSubtitleChangedRaw(const QString & _t1, const double _t2, const double _t3, const double _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 31, _a);
}

// SIGNAL 32
void GlobalMediator::playerSecSubtitleChanged(const QString & _t1, const double _t2, const double _t3, const double _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 32, _a);
}

// SIGNAL 33
void GlobalMediator::playerSubDelayChanged(const double _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 33, _a);
}

// SIGNAL 34
void GlobalMediator::playerDurationChanged(const double _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 34, _a);
}

// SIGNAL 35
void GlobalMediator::playerPositionChanged(const double _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 35, _a);
}

// SIGNAL 36
void GlobalMediator::playerPauseStateChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 36, _a);
}

// SIGNAL 37
void GlobalMediator::playerFullscreenChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 37, _a);
}

// SIGNAL 38
void GlobalMediator::playerMaxVolumeChanged(const int64_t _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 38, _a);
}

// SIGNAL 39
void GlobalMediator::playerVolumeChanged(const int64_t _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 39, _a);
}

// SIGNAL 40
void GlobalMediator::playerTitleChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 40, _a);
}

// SIGNAL 41
void GlobalMediator::playerFileChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 41, _a);
}

// SIGNAL 42
void GlobalMediator::playerMouseMoved()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void GlobalMediator::playerFileLoaded(int _t1, int _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 43, _a);
}

// SIGNAL 44
void GlobalMediator::playerClosed()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void GlobalMediator::playerResized()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void GlobalMediator::ankiSettingsChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void GlobalMediator::audioSourceSettingsChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void GlobalMediator::behaviorSettingsChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void GlobalMediator::searchSettingsChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void GlobalMediator::interfaceSettingsChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 50, nullptr);
}

// SIGNAL 51
void GlobalMediator::ocrSettingsChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 51, nullptr);
}

// SIGNAL 52
void GlobalMediator::menuSubtitleVisibilityToggled(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 52, _a);
}

// SIGNAL 53
void GlobalMediator::menuSubtitleSizeIncrease()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 53, nullptr);
}

// SIGNAL 54
void GlobalMediator::menuSubtitleSizeDecrease()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 54, nullptr);
}

// SIGNAL 55
void GlobalMediator::menuSubtitlesMoveUp()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 55, nullptr);
}

// SIGNAL 56
void GlobalMediator::menuSubtitlesMoveDown()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 56, nullptr);
}

// SIGNAL 57
void GlobalMediator::menuEnterOCRMode()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void GlobalMediator::menuShowOptions()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void GlobalMediator::menuShowAbout()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 59, nullptr);
}

// SIGNAL 60
void GlobalMediator::controlsPlay()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 60, nullptr);
}

// SIGNAL 61
void GlobalMediator::controlsPause()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 61, nullptr);
}

// SIGNAL 62
void GlobalMediator::controlsSeekForward()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 62, nullptr);
}

// SIGNAL 63
void GlobalMediator::controlsSeekBackward()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 63, nullptr);
}

// SIGNAL 64
void GlobalMediator::controlsSkipForward()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 64, nullptr);
}

// SIGNAL 65
void GlobalMediator::controlsSkipBackward()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 65, nullptr);
}

// SIGNAL 66
void GlobalMediator::controlsHidden()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 66, nullptr);
}

// SIGNAL 67
void GlobalMediator::controlsShown()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 67, nullptr);
}

// SIGNAL 68
void GlobalMediator::controlsSubtitleListToggled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 68, nullptr);
}

// SIGNAL 69
void GlobalMediator::controlsOCRToggled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 69, nullptr);
}

// SIGNAL 70
void GlobalMediator::controlsPositionChanged(const int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 70, _a);
}

// SIGNAL 71
void GlobalMediator::controlsVolumeChanged(const int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 71, _a);
}

// SIGNAL 72
void GlobalMediator::controlsFullscreenChanged(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 72, _a);
}

// SIGNAL 73
void GlobalMediator::windowOSCStateCycled()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 73, nullptr);
}

// SIGNAL 74
void GlobalMediator::termsChanged(SharedTermList _t1, SharedKanji _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 74, _a);
}

// SIGNAL 75
void GlobalMediator::subtitleExpired()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 75, nullptr);
}

// SIGNAL 76
void GlobalMediator::subtitleHidden()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 76, nullptr);
}

// SIGNAL 77
void GlobalMediator::definitionsHidden()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 77, nullptr);
}

// SIGNAL 78
void GlobalMediator::definitionsShown()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 78, nullptr);
}

// SIGNAL 79
void GlobalMediator::subtitleListHidden()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 79, nullptr);
}

// SIGNAL 80
void GlobalMediator::subtitleListShown()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 80, nullptr);
}

// SIGNAL 81
void GlobalMediator::searchWidgetHidden()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 81, nullptr);
}

// SIGNAL 82
void GlobalMediator::searchWidgetShown()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 82, nullptr);
}

// SIGNAL 83
void GlobalMediator::searchWidgetRequest(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 83, _a);
}

// SIGNAL 84
void GlobalMediator::dictionariesChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 84, nullptr);
}

// SIGNAL 85
void GlobalMediator::dictionaryOrderChanged()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 85, nullptr);
}

// SIGNAL 86
void GlobalMediator::requestSubtitleVisibility(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 86, _a);
}

// SIGNAL 87
void GlobalMediator::requestSubtitleWidgetVisibility(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 87, _a);
}

// SIGNAL 88
void GlobalMediator::requestSubtitleListVisibility(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 88, _a);
}

// SIGNAL 89
void GlobalMediator::requestSearchVisibility(const bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 89, _a);
}

// SIGNAL 90
void GlobalMediator::requestDefinitionDelete()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 90, nullptr);
}

// SIGNAL 91
void GlobalMediator::requestThemeRefresh()const
{
    QMetaObject::activate(const_cast< GlobalMediator *>(this), &staticMetaObject, 91, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
