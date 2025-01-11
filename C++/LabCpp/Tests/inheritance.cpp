#include <iostream>
using namespace std;

class Shape{
public:
    virtual double area()=0;
};

class Triangle: public Shape{
    int b,h;
public:
    Triangle(double b, double h):b(b),h(h){}
    double area(){return b*h;}
};

class Square: public Shape{
    int w,h;
    Square(double w, double h):w(w),h(h){}
    double area(){return w*h;}
}

int main(){
    

    return 0;
}
