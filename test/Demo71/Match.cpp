#include<iostream>
#include"Match.h"
#include"Time.h"
using namespace std;

/*****************************************/
//void printTime(Time &t);


void Match::printTime(Time &t){
    cout<<t.m_iHour<<':'<<t.m_iMinute<<':'<<t.m_iSecond<<endl;
}