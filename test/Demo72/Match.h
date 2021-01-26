#ifndef STUDENT_H
#define STUDENT_H

#include"Time.h"

class Match{
public:
    Match(int hour,int min,int sec);
    void testTime();//添加testTime成员函数，调用printTime
private:
    Time m_tTimer;
};

#endif