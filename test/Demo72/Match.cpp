#include<iostream>
#include"Match.h"
#include"Time.h"
using namespace std;

/*****************************************/
//void printTime(Time &t);

Match::Match(int hour,int min,int sec):m_tTimer(hour,min,sec){//对m_tTimer初始化
}

void Match::testTime(){
    m_tTimer.printTime();
    cout<<m_tTimer.m_iHour<<':'<<m_tTimer.m_iMinute<<':'<<m_tTimer.m_iSecond<<endl;
}