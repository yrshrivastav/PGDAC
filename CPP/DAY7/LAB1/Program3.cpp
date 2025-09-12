#include <iostream>
#include <set>
#include <string>
#include <limits>

using namespace std;



void displayMenu() {
    cout << "\n--- City Management Menu (using std::set) ---\n";
    cout << "1. Add City\n";
    cout << "2. Display All Cities\n";
    cout << "3. Search for a City\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    /*
        3:Create an application using set .
        Accept name of city from user and store in set
        Create Menu drivien app
        1:add city
        2:display  all city
        3: serach city
    */
    set<string> cities;
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
                string city;
                cout << "Enter city name to add: ";
                getline(cin, city);
                
                // insert() returns a pair. The .second member is true if insertion took place.
                if (cities.insert(city).second) {
                    cout << "'" << city << "' added successfully.\n";
                } else {
                    cout << "'" << city << "' already exists in the set.\n";
                }
                break;
            }
            case 2: {
                if (cities.empty()) {
                    cout << "The set is empty. No cities to display.\n";
                } else {
                    cout << "\n--- Cities (sorted automatically) ---\n";
                    for (const string& city : cities) {
                        cout << city << endl;
                    }
                }
                break;
            }
            case 3: {
                if (cities.empty()) {
                    cout << "The set is empty. Cannot search.\n";
                } else {
                    string searchCity;
                    cout << "Enter city name to search for: ";
                    getline(cin, searchCity);

                    // count() on a set returns 1 if element exists, 0 otherwise.
                    if (cities.count(searchCity)) {
                        cout << "'" << searchCity << "' was found in the set.\n";
                    } else {
                        cout << "'" << searchCity << "' was not found in the set.\n";
                    }
                }
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

