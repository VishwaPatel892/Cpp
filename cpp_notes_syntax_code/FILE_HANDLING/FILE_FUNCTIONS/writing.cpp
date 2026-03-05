// C. Writing to a file
// Writing to a file is as easy as printing any other stuff in C++. It is very similar to what we used to do when we had to print an output in the terminal. In order to write to a file, we use the insertion operator (<<). First, we create an object of the type ofstream and pass the name of the file along with its extension to the method. And then, use the extraction operator to write stuff in the file fed to the object.


#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    string str = "Welcome_To_CodeWithHarry!";
    ofstream out("example.txt");
    out << str;
    return 0;
}