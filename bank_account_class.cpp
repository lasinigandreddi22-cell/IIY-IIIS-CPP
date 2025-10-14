#include <iostream> 
using namespace std; 
class BankAccount { 
private: 
    int accountNumber; 
    string name; 
    double balance; 
public:
  BankAccount(int accNo, string accName, double initialBalance) { 
        accountNumber = accNo; 
        name = accName; 
        balance = initialBalance; 
    } 
   
    void deposit(double amount) { 
        if (amount > 0) { 
            balance += amount; 
            cout << "Amount deposited: ₹" << amount << endl; 
        } else { 
            cout << "Invalid deposit amount!" << endl; 
        } 
    } 
   
    void withdraw(double amount) { 
        if (amount <= balance) { 
            balance -= amount; 
            cout << "Amount withdrawn: ₹" << amount << endl; 
        } else { 
            cout << "Insufficient balance!" << endl; 
        } 
    } 
   
    void display() { 
        cout << "\nAccount Number: " << accountNumber << endl; 
        cout << "Account Holder: " << name << endl; 
        cout << "Current Balance: ₹" << balance << endl; 
    } 
}; 
int main() {
   BankAccount myAccount(12345, "Aditya", 10000.0); 
 
    myAccount.display(); 
    myAccount.deposit(2500.0); 
    myAccount.withdraw(4000.0); 
    myAccount.display(); 
    return 0; 
}
int main() {
