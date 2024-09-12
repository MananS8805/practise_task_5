#include<iostream>
using namespace std;

class complex{
    double real;
    double imaginary;

    public:
    complex(){
        cout<<"Default constructor no arguments initialized"<<endl;
        cout<<"Enter real number"<<endl;
        cin>>real;
        cout<<"Enter imaginary number"<<endl;
        cin>>imaginary;
    }

    complex(double r,double i):real(r),imaginary(i){
        cout<<"Parameterized constructor initialized"<<endl;
    }

    complex(complex& c)
    {
        real=c.real;
        imaginary=c.imaginary;
        cout<<"Copy constructor initialized";
    }

    void display()
    {
        cout<<real<<"+"<<imaginary<<endl;
    }
};

int main()
{
    complex c1;
    complex c2(5,9);
    complex c3(c2);
    c1.display();
    c2.display();
    c3.display();
}