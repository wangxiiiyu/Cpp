#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;
/********************************/
/*要求：定义一个Array class
data:
    m_iLen表示数组长度
function:
    构造函数
    构析函数
    len的封装函数
    信息输出函数printInfo
*/
/*******************************/
int main(){
    Array arr1(10);
    cout<<arr1.getLen()<<endl;
    system("pause");
    return 0;
}