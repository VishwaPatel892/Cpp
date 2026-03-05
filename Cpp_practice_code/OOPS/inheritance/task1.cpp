#include<iostream>
using namespace std;

class Add {
    public:
        int a = 20;
        int b = 5;

        void display() {
            cout << "Addition is implemented inside Add class" << endl;
            cout << "Result: " << a + b << endl;
        }
};

class Sub {
    public:
        int a = 20;
        int b = 5;

        void display() {
            cout << "Subtraction is implemented inside Sub class" << endl;
            cout << "Result: " << a - b << endl;
        }
};

class Mul {
    public:
        int a = 20;
        int b = 5;

        void display() {
            cout << "Multiplication is implemented inside Mul class" << endl;
            cout << "Result: " << a * b << endl;
        }
};

class Div {
    public:
        int a = 20;
        int b = 5;

        void display() {
            cout << "Division is implemented inside Div class" << endl;
            
            if(b == 0) {
                cout << "Cannot divide by zero" << endl;
            } else {
                cout << "Result: " << a / b << endl;
            }
        }
};

class Calculator : public Add, public Sub, public Mul, public Div {
    public:
        void displayChild() {
            cout << "Calculator Child Class" << endl;
        }
};

int main() {

    Calculator c1;

    c1.Add::display();
    cout << endl;

    c1.Sub::display();
    cout << endl;

    c1.Mul::display();
    cout << endl;

    c1.Div::display();

    return 0;
}