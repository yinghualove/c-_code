//time3.h -- Tim class after operator overloading
#ifndef _TIME3_H_
#define _TIME3_H_
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0,int m = 0);
    Time operator+ (const Time &t)const;
    Time operator- (const Time &t)const;
    Time operator* (double n)const;
    friend Time operator* (double n, const Time &t)
        {return t * n; }         //inline definition
    friend std::ostream & operator<< (std::ostream & os, const Time & t);
    void Show()const;
};
#endif 