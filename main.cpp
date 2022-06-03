#include "classtime.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    classTime start = classTime(15,30);
    classTime end = classTime(17,00);
    int lessonTime = end - start;
    qDebug("lesson time: %d",lessonTime);
    classTime newTime = start + lessonTime;
    if (newTime == end) {
        qDebug("start + lessonTime is ok");
    }
    else {
        qDebug("start + lessonTime isnt ok");
    }
    return a.exec();
}
