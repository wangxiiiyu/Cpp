# const 重现江湖
## 常对象成员
声明
```C++
class Line{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
private:
    const Coordinate *m_coorA;//
    const Coordinate *m_coorB;//
};
```
构造
```C++
Line::Line(int x1,int y1,int x2,int y2):
    m_coorA(x1,y1),m_m_coorB(x2,y2){
        cout<<"Line"<<endl;
    }
Line::~Line(){...}
```
实例化
```C++
int main(){
    Line *p = new Line(2,1,6,4);

    delete p;
    p = NULL;
    return 0;
}
```

## 常成员函数
const拿来修饰成员函数

```C++
class Coordinate{
private:
    int m_iX;
    int m_iY;
public:
    Coordinate(int x,int y);
    void changeX() const;//常成员函数
    //调用方法
    //const Coordinate coordinate(3,5);//常对象
    //coordinate.changeX();
};
    void changeX();//与上面的函数互为重载，但是不建议这两个一起写
    //调用方法
    //Coordinate coordinate(3,5);
    //coordinate.changeX();
};
```
常成员函数不可修改数据成员的值
```C++
void Coordinate::changeX() const{
    m_iX = 10;//error
};
```

```C++
void Coordinate::changeX(){
    m_iX = 10;//right
};
```
