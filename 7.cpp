#include<iostream>
using namespace std;

class BankSystem
{
public:
    virtual void transaction()=0;
};

class Account : public BankSystem
{
    float balance,deposit,withdraw;

public:
    void transaction()
    {
        cout<<"Enter Balance: ";
        cin>>balance;

        cout<<"Enter Deposit Amount: ";
        cin>>deposit;

        cout<<"Enter Withdraw Amount: ";
        cin>>withdraw;

        this->balance = this->balance + this->deposit - this->withdraw;

        cout<<"Final Balance = "<<balance<<endl;
    }
};

int main()
{
    BankSystem *ptr;
    Account a;

    ptr=&a;

    ptr->transaction();
}
