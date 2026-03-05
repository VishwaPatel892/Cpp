#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
      
    //   Data members....
    
        string name;
        string gender;
        int age;
        
        
    // Constructor......
        
        Student(string name1, string gender1, int age1){
            cout << "The value is going to intialize through construvtor  " << name1 << "  " <<endl;
            
            name = name1;
            gender = gender1;
            age = age1;
            
            cout << "Intialized the required value in the particular data members" << endl;
        }
        
    // Function membders...
        void display(){
            cout << "TO just check if the value is Intialized or not through Constructor" << endl;
            
            cout << "The current object data is:  " << this->name << " " << this->gender << " " << this->age << endl;
        }
        
        //DESTRUCTOR
        
        ~Student(){
            cout<<"The current object is getting destroyed: "<<this->name<<endl;
        }
};
 void createObject(){
     Student s3("Urvashi", "female", 28);
     
     s3.display();
 }


int main(){
    
    Student s1("Vishwa Patel", "female", 23);
    
    Student s2("Parth", "male", 18);
     createObject();
    
    s2.display();
    s1.display();
    
    
    return 0;
}