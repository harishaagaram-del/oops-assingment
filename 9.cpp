#include <iostream>
using namespace std;

// Abstraction: abstract base class
class Vehicle {
public:
    virtual void start() = 0;   // pure virtual → abstraction
    virtual void display() = 0; // polymorphic display
};

// Encapsulation: private members with getters
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

// Inheritance + Polymorphism
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

    v1->start();   // calls Car’s start()
    v2->start();   // calls Bike’s start()

    v1->display(); // polymorphic display
    v2->display();

    return 0;
}
