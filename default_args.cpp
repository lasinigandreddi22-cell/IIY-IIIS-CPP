#include <iostream> 
using namespace std; 
void greet(string name = "User", string greeting = "Welcome") { 
    cout << greeting << ", " << name << "!" << endl; 
} 
int main() { 
    greet();                            
    greet("Aditya");                     
    greet("Laxman", "Hello");           
    return 0; 
}  
