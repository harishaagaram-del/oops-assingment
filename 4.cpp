#include <iostream>
using namespace std;


class Account {
public:
    virtual void deposit(double amount) = 0;   
    virtual void display() = 0;                
};


class SavingsAccount : public Account {
private:
    string owner;
    double balance;
public:
    SavingsAccount(string o, double b) : owner(o), balance(b) {}
    string getOwner() { return owner; }
    double getBalance() { return balance; }

    void deposit(double amount) override {
        balance += amount;
        cout << owner << " deposited " << amount << " into Savings." << endl;
    }
    void display() override {
        cout << "Savings Account - Owner: " << owner 
             << ", Balance: $" << balance << endl;
    }
};


class CurrentAccount : public Account {
private:
    string owner;
    double balance;
public:
    CurrentAccount(string o, double b) : owner(o), balance(b) {}
    void deposit(double amount) override {
        balance += amount;
        cout << owner << " deposited " << amount << " into Current." << endl;
    }
    void display() override {
        cout << "Current Account - Owner: " << owner 
             << ", Balance: $" << balance << endl;
    }
};

int main() {
    SavingsAccount sa("Alice", 500);
    CurrentAccount ca("Bob", 1000);

    cout << "--- Encapsulation ---" << endl;
    sa.display();
    cout << "Owner via getter: " << sa.getOwner() << endl;

    cout << "\n--- Polymorphism & Abstraction ---" << endl;
    Account* a1 = &sa;
    Account* a2 = &ca;

    a1->deposit(200);   
    a2->deposit(300);  
    a1->display();      
    a2->display();

    return 0;
}
