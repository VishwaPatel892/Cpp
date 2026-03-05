#include <iostream>
using namespace std;


int calc(int a, int b, char op) {
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else if (op == '/')
        return a / b;
    else
        return 0;
}

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    cout << "Result = " << calc(a, b, op) << endl;

    return 0;
}
