#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
    int l,b;

public:
    void area()
    {
        cout<<"Enter length and breadth: ";
        cin>>l>>b;

        int result = this->l * this->b;

        cout<<"Area of Rectangle = "<<result<<endl;
    }
};

int main()
{
    Shape *ptr;
    Rectangle r;

    ptr=&r;

    ptr->area();
}
