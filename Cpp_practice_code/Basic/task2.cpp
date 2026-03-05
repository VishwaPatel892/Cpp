#include <iostream>
using namespace std;

// User-defined function
void calc(int a, int b, int choice) {
    switch (choice) {
        case 1:
            cout << "Addition = " << (a + b);
            break;

        case 2:
            cout << "Subtraction = " << (a - b);
            break;

        case 3:
            cout << "Multiplication = " << (a * b);
            break;

        case 4:
            if (b != 0)
                cout << "Division = " << (a / b);
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid choice";
    }
}

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Press 1 for Add"<< endl;
    cout << "Press 2 for Subtract"<< endl;
    cout << "Press 3 for Multiply"<< endl;
    cout << "Press 4 for Divide"<< endl;
    cout << "Enter your choice: "<< endl;
    cin >> choice;

    calc(a, b, choice);

    return 0;
}
