//D. Reading a file
//Reading from a file is as easy as reading any other stuff as an input in C++.  It is very similar to what we used to do when we had to read input from the terminal. In order to read from a file, we use the extraction operator (>>). First, we create an object of the type ifstream and pass the name of the file along with its extension to the method. And then, use the extraction operator to read stuff from the file fed to the object. 

#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    string str;
    ifstream in("example.txt");
    in >> str;
    cout << str;
    return 0;
}