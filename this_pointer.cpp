#include <iostream> 
using namespace std; 
class Employee { 
private: 
    int id; 
    string name; 
public: 
    void setDetails(int id, string name) { 
        this->id = id;       
        this->name = name;   
   } 
   
    void display() { 
        cout << "Employee ID: " << this->id << endl; 
        cout << "Employee Name: " << this->name << endl; 
    } 
}; 
int main() { 
    Employee emp1; 
    emp1.setDetails(101, "Laxman"); 
    emp1.display(); 
    return 0; 
} 
