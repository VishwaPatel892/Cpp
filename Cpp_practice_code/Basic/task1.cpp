#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a Number we will check it is Negative,Positive or Zero: and Even or Odd:" << endl;
    cin >> a;

    if(a > 0){
        cout << "Given Number is Positive:" << endl;
    }
    else if(a < 0){
        cout << "Given Number is Negative:" << endl;
    }
    else{
        cout << "Given Number is Zero:" << endl;
    }
    if(a % 2 == 0){
        cout << "Given Number is Even:" << endl;
    }
    else{
        cout << "Given Number is Odd:" << endl;
    }


    return 0;
}