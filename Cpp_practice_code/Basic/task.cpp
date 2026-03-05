#include <iostream>
using namespace std;

int main() {
    int arr[6];          // array of size 6
    int *ptr = arr;      // pointer pointing to array

  
    cout << "Enter 6 elements:"<<endl;
    for (int i = 0; i < 6; i++) {
        cin >> *(ptr + i);
    }

   
    cout << "Array elements using pointer: "<< endl;
    for (int i = 0; i < 6; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
