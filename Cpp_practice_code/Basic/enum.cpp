// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

enum word{
    LOW,
    MEDIUM,
    HIGH
};
int main() {
    enum word a1 = LOW;
    enum word a2 = MEDIUM;
    enum word a3 = HIGH;
    
    cout << "Try programiz.pro"<<endl;
    
    cout<<a1<<endl;
    cout<<a2<<endl;
    cout<<a3<<endl;
    
    
    switch(a2){
        case 0: cout<<"case0 got printed"<<endl;
        break;
        case 1: cout<<"case1 got printed"<<endl;
        break;
        case 2: cout<<"case2 got printed"<<endl;
        break;
        default:cout<<"No such expression matched"<<endl;
    }

    return 0;
}