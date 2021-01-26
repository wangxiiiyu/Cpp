# 引用
## 基本数据类型引用
```C++
#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int &b = a;//引用必须初始化

    b=10;
    cout<<a<<endl;//显示10
    return 0;
}
```

## 结构体类型
```C++
typedef struct{
    int x;
    int y;
}Coor;
```
```C++
#include<iostream>
using namespace std;
int main(){
    Coor c1;
    Coor &c = c1;//
    c.x = 10;
    c.y = 20;
    cout<<c1.x<<c1.y;
    return 0;
}

```

## 指针类型

```类型 *&指针引用名 = 指针；```
```C++
#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int *p = &a;//
    int *&q = p;//
    *q = 20;
    cout<<a<<endl;//显示20
    return 0;
}
```

## 引用作为函数参数
使用引用前
```C++
void fun(int *a,int *b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
```
```C++
int x = 10,y = 20;
fun(&x,&y);
```
使用引用后

```C++
void fun(int &a,int &b){
    int c = 0;
    c = a;
    a = b;
    b = c;
}
```
```C++
int x = 10,y = 20;
fun(x,y);
```