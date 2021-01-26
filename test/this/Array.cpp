#include<iostream>
using namespace std;
#include"Array.h"

Array::Array(int len){
    m_iLen = len;
}
Array::~Array(){
    
}
void Array::setLen(int len){
    m_iLen = len;
} 
int Array::getLen(){
    return m_iLen;
}

void Array::printinfo(){
    cout<<m_iLen;
}