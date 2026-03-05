// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Student{
//ACCESS MODIFIER USE TO TELL WHICH MEMEBER ARE ACCESSIBLE AND WHICH ARE NOT
    public:
      //DATA MEMBERS  
        string name;
        int age;
        string gender;
    //FUNCTIONS MEMBERS
      void display(){
          cout<<"Current object name is: "<<this->name<<endl;
          cout<<"Current age is: "<<this->age<< " Current gender is: "<<this->gender<<endl;
      }
          
};



class Human{
//ACCESS MODIFIER USE TO TELL WHICH MEMEBER ARE ACCESSIBLE AND WHICH ARE NOT
    public:
      //DATA MEMBERS  
        string name1;
        int age1;
        string gender1;
        int weight;
    //FUNCTIONS MEMBERS
      void display1(){
          cout<<"Current object name is: "<<this->name1<<endl;
          cout<<"Current age is: "<<this->age1<< " Current gender is: "<<this->gender1<<endl;
          cout<<"Human skeleton is running and weight is: "<<this->weight<<endl;
      }
};

int main() {
    cout<<"Object is created from here: " <<endl;
    Student s1;
    Human h1;
    
    s1.name = "Vishwa Patel";
    s1.age = 18;
    s1.gender = "female";
    
    h1.name1 = "Nilesh";
    h1.age1 = 34;
    h1.gender1 = "male";
    h1.weight = 78;
    
    
    s1.display();
    h1.display1();
    


    return 0;
}