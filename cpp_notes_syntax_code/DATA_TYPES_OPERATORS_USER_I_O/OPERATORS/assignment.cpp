#include <iostream>
using namespace std;

int main() {
    int a = 10;   // Initial value
    int b = 5;

    cout << "Initial values: " << endl;
    cout << "a = " << a << ", b = " << b << endl << endl;

    // = Operator
    a = b;
    cout << "After a = b;" << endl;
    cout << "a = " << a << endl << endl;

    // Reset value
    a = 10;

    // += Operator
    a += b;   // a = a + b
    cout << "After a += b;" << endl;
    cout << "a = " << a << endl << endl;

    // Reset value
    a = 10;

    // -= Operator
    a -= b;   // a = a - b
    cout << "After a -= b;" << endl;
    cout << "a = " << a << endl << endl;

    // Reset value
    a = 10;

    // *= Operator
    a *= b;   // a = a * b
    cout << "After a *= b;" << endl;
    cout << "a = " << a << endl << endl;

    // Reset value
    a = 10;

    // /= Operator
    a /= b;   // a = a / b
    cout << "After a /= b;" << endl;
    cout << "a = " << a << endl;

    return 0;
}