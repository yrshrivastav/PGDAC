#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int acctNo;
    string customerName;
    double balance;

public:
    // Default constructor
    BankAccount() {
        acctNo = 0;
        customerName = "Default";
        balance = 0.0;
    }

    // Parameterized constructor to accept all details
    BankAccount(int acctNo, string customerName, double balance) {
        this->acctNo = acctNo;
        this->customerName = customerName;
        this->balance = balance;
    }

    // Business Logic Method: withdraw
    void withdraw(double amt) {
        if (amt > 0 && balance >= amt) {
            balance -= amt;
            cout << "Withdrawal of " << amt << " successful." << endl;
        } else if (amt <= 0) {
            cout << "Withdrawal amount must be positive." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }

    // Business Logic Method: deposit
    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposit of " << amt << " successful." << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Method to display account details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << acctNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    /*
    2:Create cpp application for bank account handling.
    2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
    Add constr. (2 constrs : first to accept all details )

    2.2 Add Business logic methods
    Methods
    public void withdraw(double amt)
    public void deposit(double amt)

    2.3: Create object of account class and test withdraw and deposit methods.
    */

    // Create object of account class
    BankAccount acc1(101, "Yash Raj Shrivastav", 20000.00);

    // Display initial details
    cout << "Initial Account State:";
    acc1.display();

    // Test deposit method
    cout << "\nDepositing 5000..." << endl;
    acc1.deposit(5000);
    acc1.display();

    // Test withdraw method (successful)
    cout << "\nWithdrawing 3000..." << endl;
    acc1.withdraw(3000);
    acc1.display();

    // Test withdraw method (insufficient funds)
    cout << "\nAttempting to withdraw 25000..." << endl;
    acc1.withdraw(25000);
    acc1.display();

    return 0;
}

