#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void getStudent() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
    }
    void displayStudent() {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << roll << endl;
    }
};

class Academic : public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter 2 Marks: ";
        cin >> m1 >> m2;
    }
};

class Sports : public Student {
protected:
    int sportsMark;
public:
    void getSports() {
        cout << "Enter Sports Mark: ";
        cin >> sportsMark;
    }
};

class Final : public Academic {
protected:
    int total;
public:
    void calculate() {
        total = m1 + m2;
    }
    void displayAcademic() {
        displayStudent();
        cout << "Academic Total: " << total << endl;
    }
};

int main() {
    Final s1;
    s1.getStudent();
    s1.getMarks();
    s1.calculate();
    s1.displayAcademic();

    Sports s2;
    s2.getStudent();
    s2.getSports();
    s2.displayStudent();
}
