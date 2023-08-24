//time0.h -- Tim class before operator overloading
#ifndef _TIME0_H_
#define _TIME0_H_

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
    Time Sum(const Time &t)const;
    void Show()const;
};
#endif /* _TIME0_H_ */