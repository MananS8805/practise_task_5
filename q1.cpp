#include<iostream>
using namespace std;
class account{
    protected:
    string name;
    int employee_id;
    double salary;

    public:
    account(string n,int eid, double s):name(n),employee_id(eid),salary(s){}

};

class developers:public account{
    double bonus;
public:
    developers(string n, int eid, double s):account(n,eid,s){
        setbonus();
    }
    
    void setbonus()
    {
        if(salary>=50000)
        {
            bonus=15000;
        }
        else{
            bonus=8000;
        }
    }
    double total_annual_income(){
        return bonus+salary;
    }

    void display_total_income()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<employee_id<<endl;
        cout<<"Total annual salary: "<<total_annual_income()<<endl;
    }
};

int main()
{
    developers d1("King",8,90000);
    developers d2("JOn",9,40000);

    d1.display_total_income();
    d2.display_total_income();

}