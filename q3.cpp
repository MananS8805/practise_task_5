#include<iostream>
#include<cmath>
using namespace std;
class calculator
{
    public:
    double add(double a,double b)
    {
        return a+b;
    }
    double subtract(double a,double b)
    {
        return a-b;
    }
    double multiply(double a,double b)
    {
        return a*b;
    }
    double divide(double a,double b)
    {
        return a/b;
    }
};

class scientific_Calc{
    public:
    
    double sin_function(double a)
    {
        return sin(a);
    }
    double cos_function(double a)
    {
        return cos(a);
    }
    double tan_function(double a)
    {
        return tan(a);
    }
};
class hybrid_calc: public calculator, public scientific_Calc{

};
int main(){
    hybrid_calc a;
    double A=M_PI;
    double result=a.add(a.multiply(5,a.sin_function(A)),a.multiply(2,a.cos_function(A)));
    cout<<"result for expression 5*sin(a)+2*cos(a) is "<<result<<endl;
}


