#include <iostream>
#include <fstream>
using namespace std;

// Parent Class 1
class Add {
public:
    int add(int a, int b) {
        return a + b;
    }
};

// Parent Class 2
class Sub {
public:
    int sub(int a, int b) {
        return a - b;
    }
};

// Parent Class 3
class Mul {
public:
    int mul(int a, int b) {
        return a * b;
    }
};

// Parent Class 4
class Div {
public:
    int div(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

// Child Class (Multiple Inheritance)
class Cal : public Add, public Sub, public Mul, public Div {
private:
    int addCount = 0;
    int subCount = 0;
    int mulCount = 0;
    int divCount = 0;

public:
    void calculate(int a, int b, char op) {
        int result;

        switch(op) {
            case '+':
                result = add(a, b);
                cout << "Result: " << result << endl;
                addCount++;
                break;

            case '-':
                result = sub(a, b);
                cout << "Result: " << result << endl;
                subCount++;
                break;

            case '*':
                result = mul(a, b);
                cout << "Result: " << result << endl;
                mulCount++;
                break;

            case '/':
                result = div(a, b);
                cout << "Result: " << result << endl;
                divCount++;
                break;

            default:
                cout << "Invalid Operator!" << endl;
                return;
        }

        // Save result to file
        ofstream file("result.txt", ios::app);
        file << "Operation: " << op << " Result: " << result << endl;
        file.close();
    }

    // Display usage count
    void showUsage() {
        cout << "\nOperation Usage Count:\n";
        cout << "Add used: " << addCount << " times\n";
        cout << "Sub used: " << subCount << " times\n";
        cout << "Mul used: " << mulCount << " times\n";
        cout << "Div used: " << divCount << " times\n";
    }
};

// Main Function
int main() {
    Cal c;
    int a, b;
    char op;
    char choice;

    do {
        cout << "\nEnter two numbers: ";
        cin >> a >> b;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        c.calculate(a, b, op);

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    c.showUsage();

    return 0;
}