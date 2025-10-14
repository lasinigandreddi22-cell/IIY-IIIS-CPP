#include <iostream> 
using namespace std; 
class Student { 
private: 
    int rollNumber; // private: cannot be accessed directly outside the class 
public: 
    string name; // public: can be accessed directly 
    void setRollNumber(int r) { 
        rollNumber = r; 
    } 
      int getRollNumber() { 
        return rollNumber; 
    } 
}; 
int main() { 
    Student s1; 
    s1.name = "Aditya"; 
    cout << "Name: " << s1.name << endl; 
    // Accessing private member via public member functions 
    s1.setRollNumber(101); 
    cout << "Roll Number: " << s1.getRollNumber() << endl; 
    // Uncommenting the line below will cause a compilation error 
    // s1.rollNumber = 200; // ❌ Not allowed (private member) 
    return 0; 
} 
