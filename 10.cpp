#include <iostream>
using namespace std;

// Abstraction: abstract base class
class Animal {
public:
    virtual void sound() = 0;     // pure virtual → abstraction
    virtual void info() = 0;      // polymorphic info
};

// Encapsulation: private members with getters
class Dog : public Animal {
private:
    string breed;
    int age;
public:
    Dog(string b, int a) : breed(b), age(a) {}
    string getBreed() { return breed; }
    int getAge() { return age; }

    void sound() override {
        cout << "Dog barks: Woof Woof!" << endl;
    }
    void info() override {
        cout << "Dog Breed: " << breed << ", Age: " << age << endl;
    }
};

// Inheritance + Polymorphism
class Cat : public Animal {
private:
    string color;
public:
    Cat(string c) : color(c) {}
    void sound() override {
        cout << "Cat meows: Meow Meow!" << endl;
    }
    void info() override {
        cout << "Cat Color: " << color << endl;
    }
};

int main() {
    Dog d("Labrador", 5);
    Cat c("White");

    cout << "--- Encapsulation ---" << endl;
    d.info();
    cout << "Breed via getter: " << d.getBreed() << endl;

    cout << "\n--- Polymorphism & Abstraction ---" << endl;
    Animal* a1 = &d;
    Animal* a2 = &c;

    a1->sound();   // calls Dog’s sound()
    a2->sound();   // calls Cat’s sound()

    a1->info();    // polymorphic info
    a2->info();

    return 0;
}
