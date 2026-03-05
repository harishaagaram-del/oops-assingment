#include<iostream>
using namespace std;

class SalarySystem
{
public:
    virtual void calculate()=0;
};

class Employee : public SalarySystem
{
    float salary,bonus,total;

public:
    void calculate()
    {
        cout<<"Enter Basic Salary: ";
        cin>>salary;

        cout<<"Enter Bonus: ";
        cin>>bonus;

        this->total = this->salary + this->bonus;

        cout<<"Total Salary = "<<total<<endl;
    }
};

int main()
{
    SalarySystem *ptr;
    Employee e;

    ptr=&e;

    ptr->calculate();
}
