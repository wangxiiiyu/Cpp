#include<iostream>
#include"stdlib.h"
#include"Time.h"
#include"Match.h"
using namespace std;

/*****************************************/
//void printTime(Time &t);

int main(void){
    Match m(6,34,25);
    m.testTime;

    system("pause");
    return 0;
}

void Match::testTime(){
    m_tTimer.printTime;
    cout<<m_tTimer.m_iHour<<':'<<m_tTimer.m_iMinute<<m_tTimer.m_iSecond<<endl;
}