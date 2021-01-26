#include<stdlib.h>
#include<iostream>
using namespace std;


namespace A{
    int x = 1;
    void fun(){
        cout<<'a'<<endl;
    }
}
namespace B{
    int x = 2;
    void fun(){
        cout<<'b'<<endl;
    }
    void fun2(){
        cout<<'bb'<<endl;
    }
}

using namespace B;//在没有指定命名空间时默认B的命名空间
int main(){
    cout<<A::x<<endl;
    B::fun();
    fun2();
    system("pause");
    return 0;
}