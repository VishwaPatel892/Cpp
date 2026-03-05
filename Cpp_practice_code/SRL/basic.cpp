#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v1 = {1,2,3,4};
    vector<int> v2;

    for(int value : v1){
        cout << value << endl;
    }
    

    return 0;
}