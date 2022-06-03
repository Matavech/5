#ifndef CLASSTIME_H
#define CLASSTIME_H
#include <iostream>

class classTime
{
public:
    classTime();
    classTime(int h, int m);
    void print(int h, int m);
    classTime operator + (int time);
    int operator - (classTime time);
    bool operator == (classTime time); //проверка равенства времени
private:
    int hours;
    int mins;
    static const int hInDay;
    static const int mInHour;

};

#endif // CLASSTIME_H
