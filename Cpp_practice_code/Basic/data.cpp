#include<iostream>
#include<string>

using namespace std;

struct Employee{
    int ID;
    string name;
    int salary;
};


int main(){
    
    int size = 0;
    
    cout<< "enter the size of array:  " << endl;
    cin >> size;
    
    Employee emp[size];
    
    for(int i=0; i<2; i++){
        cout<< "Enter you're id:  " << endl;
        cin >> emp[i].ID;
        cout << "enter you're name:  " << endl;
        cin >> emp[i].name;
        cout<<"enter you valid salary:  " << endl;
        cin >> emp[i].salary;
    }
    
    for(int i=0; i< 2; i++){
        cout<< "current index number is:  " << i << " empyee id is: " << emp[i].ID << " Employee name is: " << emp[i].name << endl;
    }
    
    return 0;
}