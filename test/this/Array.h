#ifndef __ARRAY__
#define __ARRAY__

class Array{
public:
    Array(int len);
    ~Array();
    void setLen(int len);
    int getLen();
    void printInfo();
private:
    int len;//m+_类型+参数名称
};

#endif