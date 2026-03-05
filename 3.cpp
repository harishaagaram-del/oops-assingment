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
};

class Academic : public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter 2 Marks: ";
        cin >> m1 >> m2;
    }
    int getAcademicTotal() {
        return m1 + m2;
    }
};

class Sports {
protected:
    int sportsMark;
public:
    void getSports() {
        cout << "Enter Sports Mark: ";
        cin >> sportsMark;
    }
    int getSportsMark() {
        return sportsMark;
    }
};

class Overall : public Academic, public Sports {
protected:
    int overallTotal;
public:
    void calculateOverall() {
        overallTotal = getAcademicTotal() + getSportsMark();
    }
    void addGrace(int g) {
        overallTotal += g;
    }
    void displayFinal() {
        cout << "\nOverall Total: " << overallTotal << endl;
        if (overallTotal >= 150)
            cout << "Status: PASS\n";
        else
            cout << "Status: FAIL\n";
    }
};

int main() {
    Overall s;
    s.getStudent();
    s.getMarks();
    s.getSports();
    s.calculateOverall();
    s.addGrace(10);
    s.displayFinal();
}
