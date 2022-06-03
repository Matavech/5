#include "classtime.h"
const int classTime::hInDay = 24; //кол-во часов в сутках
const int classTime::mInHour = 60; //кол-во минут в часах

classTime::classTime()
    :hours(00), mins(00)
{
}

classTime::classTime(int h, int m)

{
    if (m >=mInHour) {
        int days = m / mInHour;
        h += days;
        m -= days * mInHour;
    }
    if (h<hInDay) {
        (*this).hours = h;
    }
    else {
        (*this).hours = h - hInDay * (h/hInDay);
    }
    (*this).mins = m;

}

void classTime::print(int h, int m)
{
    std::cout << h << ":" << m;
}

classTime classTime::operator +(int time) {
    return classTime((*this).hours, time + (*this).mins);
}

int classTime::operator -(classTime time)
{
    int h;
    if (hours - time.hours > 0) {
         h = (*this).hours - time.hours;
    }
    else {
        h = hInDay + (*this).hours - time.hours;
    }
    return (h * mInHour + ((*this).mins - time.mins));
}

bool classTime::operator ==(classTime time) {
    return (*this).hours == time.hours && (*this).mins == time.mins;
}
