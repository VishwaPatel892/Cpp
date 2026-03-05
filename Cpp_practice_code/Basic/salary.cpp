#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int ID;
    string name;
    int salary;
};

int main() {
    const int size = 5;
    Employee emp[size];

    // Input
    for (int i = 0; i < size; i++) {
        cout << "\nEnter details of employee " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> emp[i].ID;

        cout << "Enter name: ";
        cin >> emp[i].name;

        cout << "Enter salary: ";
        cin >> emp[i].salary;
    }

    // Find employee with max salary
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Output
    cout << "\nEmployee with Maximum Salary:\n";
    cout << "ID: " << emp[maxIndex].ID << endl;
    cout << "Name: " << emp[maxIndex].name << endl;
    cout << "Salary: " << emp[maxIndex].salary << endl;

    return 0;
}
