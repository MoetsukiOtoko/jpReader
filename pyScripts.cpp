#include "pyScripts.h"
#include <QGuiApplication>
#include <QProcess>
#include <QClipboard>
#include <string>
#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>
#include <chrono>
#include <thread>
#include <algorithm>
#include "util/utils.h"
void pyScripts::playSelectedAudio(QString &string)
{
    if (!string.isEmpty())
    {
        QClipboard *clipboard = QGuiApplication::clipboard();
        clipboard->setText(string);
    }

    system("python /home/phil/_scripts/quickTextToAudio/main.py &");
}

QString pyScripts::areaCapture()
{
    QStringList arguments;
    arguments << DirectoryUtils::getConfigDir() + "googleVision.py";
    arguments << DirectoryUtils::getConfigDir() + "capture.png";

    QProcess process;
    process.start("python", arguments);
    process.waitForFinished();
    return QString::fromStdString(getClipboard());
}

std::string pyScripts::getClipboard()
{
    std::array<char, 1280> buffer;
    std::string result;
    std::shared_ptr<FILE> pipe(popen("xclip -selection clipboard -o", "r"), pclose);
    if (!pipe) throw std::runtime_error("popen() failed!");
    while (!feof(pipe.get())) {
        if (fgets(buffer.data(), 128, pipe.get()) != nullptr)
            result += buffer.data();
    }
    result.erase(std::remove(result.begin(), result.end(), '\n'), result.end());
    return result;
}

