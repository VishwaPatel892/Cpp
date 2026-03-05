#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string or number: ";
    cin >> input;

    string reversed = "";
    
    // Reverse the input
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    // Check palindrome
    if (input == reversed) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}