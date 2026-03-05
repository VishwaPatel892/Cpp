#include<iostream>
#include<set>

using namespace std;

int main(){



multiset<int> s1;
    multiset<int> s2 = {34,-78,56,32,78,34,-78, 34};
    
    for(int value : s2){
        cout << value << endl;
    }
    
    // s2.erase(34);
    
    cout << endl;
    
        for(int value : s2){
        cout << value << endl;
    }
    
    cout << s2.count(-78)<< endl;
    cout<< s2.count(34) << endl;
    
    auto itr  = s2.find(-76);
    
    if(itr != s2.end()){
        cout << "Element got:  " << *itr << endl;
    }
    else{
        cout << "Given element is not exist" << endl;
    }


    return 0;
}



#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m, value;

    // Step 1: Sizes of two lists
    cout << "Enter size of list L1: ";
    cin >> n;

    cout << "Enter size of list L2: ";
    cin >> m;

    list<int> L1, L2;

    // Step 2: Insert elements in L1
    cout << "Enter elements of L1:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        L1.push_back(value);
    }


    
    list<int> L3 = L1;
    L3.merge(L2);

    
    L3.reverse();



  

    return 0;
}
