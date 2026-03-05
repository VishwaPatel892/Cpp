// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {

//     ifstream file;
//     string data;

//     file.open("Example.txt", ios::in);

//     if (file.is_open()) {
//         cout << "The file is being read below this statement:" << endl;

//         while (getline(file, data)) {
//             cout << data << endl;
//         }

//         file.close();
//     } else {
//         cout << "File not opened!" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream file;
    string data;

    file.open("Example.txt", ios::app); 

    if (file.is_open()) {

        cout << "Enter text to write into file: ";
        getline(cin, data);   // user input

        file << data << endl; // write to file
        file.close();

        cout << "Data written successfully!" << endl;
    } 
    else {
        cout << "File not opened!" << endl;
    }

    return 0;
}


