#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;  
    virtual void display() = 0; 
};


class Car : public Vehicle {
private:
    string brand;
    int speed;
public:
    Car(string b, int s) : brand(b), speed(s) {}
    string getBrand() { return brand; }
    int getSpeed() { return speed; }

    void start() override {
        cout << brand << " car starts with a roar!" << endl;
    }
    void display() override {
        cout << "Car: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};


class Bike : public Vehicle {
private:
    string type;
    int gear;
public:
    Bike(string t, int g) : type(t), gear(g) {}
    void start() override {
        cout << type << " bike starts with a kick!" << endl;
    }
    void display() override {
        cout << "Bike: " << type << ", Gears: " << gear << endl;
    }
};

int main() {
    Car c("Toyota", 180);
    Bike b("Mountain", 21);

    cout << "--- Encapsulation ---" << endl;
    c.display();
    cout << "Brand via getter: " << c.getBrand() << endl;

    cout << "\n--- Polymorphism & Abstraction ---" << endl;
    Vehicle* v1 = &c;
    Vehicle* v2 = &b;

    v1->start(); 
    v2->start();  

    v1->display();
    v2->display();

    return 0;
}
