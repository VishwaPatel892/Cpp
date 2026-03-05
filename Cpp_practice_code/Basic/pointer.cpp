// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
  int a = 10;
  int* ptr = &a;
  
  cout<<"The actual targeted variable which is a whose address is: "<<&a<<endl;
  cout<<"The address printed with the help of ptr for targeted variable is: "<<ptr<<endl;
  cout<<"The actual value of targeted variable is "<<*ptr<< endl;
  
  *ptr = 67;
  cout<<"The new value in a variable is : "<<a<<endl;

 

    return 0;
}



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
  int a = 10;
  int* ptr = &a;
  int **ptr1 = &ptr;
  
  int arr[5]= {1,2,3,4,5};
  int* arr1 = arr;
  
  for(int i=0; i<5; ++i){
      cout<< "Current index is: " <<i<<"and value is: "<<arr1[i]<<endl;
  }
  
//   cout<<"The actual targeted variable which is a whose address is: "<<&a<<endl;
//   cout<<"The address printed with the help of ptr for targeted variable is: "<<ptr<<endl;
//   cout<<"The actual value of targeted variable is "<<*ptr<< endl;
  
//   *ptr = 67;
//   cout<<"The new value in a variable is : "<<a<<endl;

 

    return 0;
}





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
