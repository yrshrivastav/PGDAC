#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;



class User {
private:
    string userid;
    string name;
    string email;
    string pwd;

public:
    // Parameterized constructor
    User(string id, string n, string e, string p)
        : userid(id), name(n), email(e), pwd(p) {}

    // Getter for userid to find a user
    string getUserId() const {
        return userid;
    }
    
    // Getter for name to display in prompts
    string getName() const {
        return name;
    }

    // Setter for password
    void setPwd(const string& newPwd) {
        pwd = newPwd;
    }
    
    // Display user information (omits password for security)
    void display() const {
        cout << "User ID: " << userid << "\t| Name: " << name << "\t| Email: " << email << endl;
    }
};

void displayMenu() {
    cout << "\n--- User Management Menu ---\n";
    cout << "1. Add User\n";
    cout << "2. Display All Users\n";
    cout << "3. Search User\n";
    cout << "4. Change Password\n";
    cout << "5. Delete All Users\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {

    /*
        2:Create an application for storing user information in vector.
        (Hint:User class with data member userid,name,email,pwd)
        Create Menu Driven app
        1:add user
        2:display all users
        3:search user
        4:change pwd
        5:delete all
    */

    vector<User> users;
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
                string id, name, email, pwd;
                cout << "Enter User ID: ";
                getline(cin, id);
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Email: ";
                getline(cin, email);
                cout << "Enter Password: ";
                getline(cin, pwd);

                users.emplace_back(id, name, email, pwd);
                cout << "User added successfully.\n";
                break;
            }
            case 2: {
                if (users.empty()) {
                    cout << "No users to display.\n";
                } else {
                    cout << "\n--- All User Details ---\n";
                    for (const auto& user : users) {
                        user.display();
                    }
                }
                break;
            }
            case 3: {
                if (users.empty()) {
                    cout << "No users in the system to search.\n";
                } else {
                    string searchId;
                    cout << "Enter User ID to search for: ";
                    getline(cin, searchId);
                    bool found = false;
                    for (const auto& user : users) {
                        if (user.getUserId() == searchId) {
                            cout << "User found:\n";
                            user.display();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "User with ID '" << searchId << "' not found.\n";
                    }
                }
                break;
            }
            case 4: {
                 if (users.empty()) {
                    cout << "No users available to update.\n";
                } else {
                    string searchId, newPwd;
                    cout << "Enter User ID to change password: ";
                    getline(cin, searchId);
                    
                    bool found = false;
                    for (auto& user : users) {
                        if (user.getUserId() == searchId) {
                            cout << "Enter new password for " << user.getName() << ": ";
                            getline(cin, newPwd);
                            user.setPwd(newPwd);
                            cout << "Password updated successfully.\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "User with ID '" << searchId << "' not found.\n";
                    }
                }
                break;
            }
            case 5: {
                users.clear();
                cout << "All users have been deleted.\n";
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

