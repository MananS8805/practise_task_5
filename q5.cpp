#include<iostream>
using namespace std;
#include<cmath>

class shape{
    public:
    virtual double area() const=0;
    virtual ~shape(){}
};

class circle: public shape{
    double radius;
    public:
    circle(double r): radius(r){}

    double area() const override{
        return radius*radius*M_PI;
    }
};

class square: public shape{
    double side;
    public:
    square(double s): side(s){}
    double area() const override{
        return side*side;
    }
};

void printarea(const shape *s)
{
    cout<<"Area is :"<<s->area()<<endl;
}
int main()
{
    shape *circle1=new circle(5);
    shape *square1=new square(8);

    printarea(circle1);
    printarea(square1);

    delete circle1;
    delete square1; 
}
