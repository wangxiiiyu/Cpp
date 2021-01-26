# this指针

```C++
class Array
{
public:
    Array(int _len)
    :len(_len)
    {}
    int getLen(){return len;}//get
    void setLen(int _len){len = _len;}//set
private:
    int len;//数据成员与参数不可同名
}；
```
如果我们实例化```Array arr1```则this取arr1地址，
如果我们实例化```Array arr2```则this取arr2地址...
那么我们可以
```C++
class Array
{
public:
    Array(int len){this->len = len;}//this取代len,len取代_len
    int getLen(){return len;}
    void setLen(int len){this->len = len;}
private:
    int len;
}；
```
举一个例子解释，上面代码等价于下面的
```C++
class Array
{
public:
    Array(T *this,int _len){this->len = _len;}
    int getLen(T *this){return this->len;}
    void setLen(T *this,int _len){this->len = _len;}
private:
    int len;
}；
```
实例化
```C++
int main(){
    Arry arr1(this,10);
    //len = 10
    //this->len = 10
    Arry arr2(this)
    //ruturn this->len
    return 0;
}
````

## this指针在参数列表位置