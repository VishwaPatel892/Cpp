// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is Parent class." << endl;
    }
};

class Child1 : public Parent {
    public:
    void display1() {
        cout << "This is Child class." << endl;
    }
};

class Child2 : public Parent {
    public:
    void display2() {
        cout << "This is Child2 class." << endl;
    }
};

class Child3 : public Child1, public Child2 {
    public:
    void display3() {
        cout << "This is child3 class." << endl;
    }
};

int main() {
    Child3 c1;
    
    c1.display1(); 
    c1.display2();
    c1.display3();
    return 0;
}