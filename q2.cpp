#include<iostream>
using namespace std;

class Student{
    protected:
    int enrollment_number;
    string name;
    int student_class;

    public:
    void get_student_data()
    {
        cout<<"Enter enrollment number"<<endl;
        cin>>enrollment_number;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter student class"<<endl;
        cin>>student_class;
    }
    Student()
    {
        get_student_data();
    }

    void display_info()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"enrollment number is "<<enrollment_number<<endl;
        cout<<"Student class is "<<student_class<<endl;
    }
};
class test: public Student{
    protected:
    double Marks1;
    double Marks2;
    double Marks3;
    double Marks4;
    double Marks5;

    public:
    void get_marks()
    {
        cout<<"enter marks respectively"<<endl;
        cin>>Marks1;
        cin>>Marks2;
        cin>>Marks3;
        cin>>Marks4;
        cin>>Marks5;
    }

    test()
    {
        get_marks();
    }

};

class result: public test{
    protected:
    double total;
    double percentage;

    public:
    result()
    {
        calculate();
    }

    void calculate()
    {
        total=Marks1+Marks2+Marks3+Marks4+Marks5;
        percentage=(total/500)*100;
    }

    void display_details()
    {
        cout<<"Name is : "<<name<<endl;
        cout<<"enrollment id  is : "<<enrollment_number<<endl;
        cout<<"class division is : "<<student_class<<endl;
        cout<<"Total marks "<<total<<endl;
        cout<<"Total percentage is "<<percentage<<endl;
    }

};

int main()
{
    result s1;
    
}