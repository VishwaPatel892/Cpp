#include <iostream>
using namespace std;
 
int main()
{
    int i = 5;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
 
    return 0;
}
//Here, even if i was less than 5 from the very beginning, the do-while let the print statement execute once, and then terminated.
