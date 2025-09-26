#include <iostream>
#include <map>
#include <string>
#include <limits>

using namespace std;



class Account {
private:
    int actid;
    string name;
    double balance;

public:
    // Default constructor
    Account() : actid(0), name(""), balance(0.0) {}

    // Parameterized constructor
    Account(int id, string n, double bal) : actid(id), name(n), balance(bal) {}

    void display() const {
        cout << "ID: " << actid << "\t| Name: " << name << "\t| Balance: " << balance << endl;
    }
};

void displayMenu() {
    cout << "\n--- Account Management Menu (using std::map) ---\n";
    cout << "1. Add Account\n";
    cout << "2. Display All Accounts\n";
    cout << "3. Search for an Account by ID\n";
    cout << "4. Remove All Accounts\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    /*
        4:Create an application using map for storing key and value
        key:int
        value:Account type
        Create Account class with actid ,name,balance
        Create Menu driven app
        1:Add Account
        2:Display all
        3:Search account by actid;
        4:Remove all
    */
    map<int, Account> accounts;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = -1; // Set to an invalid choice to loop again
            continue;
        }
        // Consume the rest of the line after reading a number
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                int id;
                string name;
                double balance;

                cout << "Enter Account ID (integer): ";
                cin >> id;
                if(cin.fail()){
                     cout << "Invalid ID. Please enter an integer.\n";
                     cin.clear();
                     cin.ignore(numeric_limits<streamsize>::max(), '\n');
                     break;
                }
                
                // Check if account ID already exists
                if (accounts.count(id)) {
                    cout << "Account with ID " << id << " already exists.\n";
                    break;
                }
                
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Initial Balance: ";
                cin >> balance;
                 if(cin.fail()){
                     cout << "Invalid balance. Please enter a number.\n";
                     cin.clear();
                     cin.ignore(numeric_limits<streamsize>::max(), '\n');
                     break;
                }

                accounts.emplace(id, Account(id, name, balance));
                cout << "Account added successfully.\n";
                break;
            }
            case 2: {
                if (accounts.empty()) {
                    cout << "No accounts to display.\n";
                } else {
                    cout << "\n--- All Account Details ---\n";
                    // The iterator for a map points to a pair (key, value)
                    for (const auto& pair : accounts) {
                        pair.second.display();
                    }
                }
                break;
            }
            case 3: {
                if (accounts.empty()) {
                    cout << "The map is empty. Cannot search.\n";
                } else {
                    int searchId;
                    cout << "Enter Account ID to search for: ";
                    cin >> searchId;
                    
                     if(cin.fail()){
                         cout << "Invalid ID. Please enter an integer.\n";
                         cin.clear();
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');
                         break;
                    }

                    auto it = accounts.find(searchId);
                    if (it != accounts.end()) {
                        cout << "Account found:\n";
                        it->second.display();
                    } else {
                        cout << "Account with ID " << searchId << " was not found.\n";
                    }
                }
                break;
            }
            case 4: {
                accounts.clear();
                cout << "All accounts have been removed.\n";
                break;
            }
            case 0:
                cout << "Exiting application.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 0);

    return 0;
}

