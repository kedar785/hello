#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Derived class
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Main function
int main() {
    Shape* s;
    Circle c;
    
    s = &c;
    s->draw();   // calling function through base class pointer
    
    return 0;
}