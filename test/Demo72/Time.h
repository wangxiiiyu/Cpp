#ifndef TIME_H
#define TIME_H

class Match;//declaraction
class Time{
    friend Match;//friend class declaration
public:
    Time(int hour,int min,int sec);
private:
    void printTime(); //成员函数
    int m_iHour;
    int m_iMinute;
    int m_iSecond;
};

#endif