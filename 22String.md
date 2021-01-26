# String

```C++
#include<iostream>
#include<string>//header
using namespace std;
int main(){
    string s1 = "Zhang";//
    string s2("San");//
    string s3(s2);//
    string s4(n,'c');//n个‘c’
    cout<<name<<hoby<<endl;
    return 0;
}
```

## 常用操作
| 申请内存 |释放内存|
|:--:|:--:|
|s.empty()|若s为空，返回true,否则false|
|s.size()|返回s字符个数|
|s[n]|返回s中位置n的字符，位置从零开始|
|s1 + s2|两串连成新串，返回新串，但当等号两边均是“xxx”字符串时非法|
|s1 = s2|人类的福音，我再也不想用strcpy了
|s1 == s2|判定等不等，等返回ture,否则false，s1 != s2同理|