//Initialising and using enum elements
//Since every enum element gets assigned a value to it, they could be used to compare if a particular variable store the same value. 

#include <iostream>
using namespace std;
 
enum Meal
{
    breakfast,
    lunch,
    dinner
};
 
int main()
{
    Meal m1 = dinner;
    if (m1 == 2)
    {
        cout << "The value of dinner is " << dinner << endl;
    }
}