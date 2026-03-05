#include<iostream>
using namespace std;
class Operation
{
public:
    virtual void calculate() = 0;
};

class Addition : public Operation
{
    int a,b,sum;

public:
    void calculate()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;

        this->sum = this->a + this->b;

        cout<<"Sum = "<<sum<<endl;
    }
};

int main()
{
    Operation *ptr;
    Addition obj;

    ptr=&obj;

    ptr->calculate();
}
