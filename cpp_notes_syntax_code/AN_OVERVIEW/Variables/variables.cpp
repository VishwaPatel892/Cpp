// VARIABLES


#include <iostream>

using namespace std;

int a = 5; // GLOBAL VARIABLE

void func()
{
    cout << a << endl;
}

int main()
{
    int a = 10; // LOCAL VARIABLE
    cout << a << endl;
    func();

    return 0;
}
