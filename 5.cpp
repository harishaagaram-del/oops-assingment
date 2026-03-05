#include<iostream>
using namespace std;

class Student
{
public:
    virtual void process()=0;
};

class Average : public Student
{
    int m1,m2,m3;
    float avg;

public:
    void process()
    {
        cout<<"Enter three marks: ";
        cin>>m1>>m2>>m3;

        this->avg=(this->m1+this->m2+this->m3)/3.0;

        cout<<"Average = "<<avg<<endl;
    }
};

int main()
{
    Student *ptr;
    Average a;

    ptr=&a;

    ptr->process();
}
