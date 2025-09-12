#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, find
#include <limits>    // For numeric_limits

using namespace std;



void displayMenu() {
    cout << "\n--- Vector Operations Menu ---\n";
    cout << "1. Add Element\n";
    cout << "2. Show All Elements\n";
    cout << "3. Search for an Element\n";
    cout << "4. Sort Elements\n";
    cout << "5. Reverse Elements\n";
    cout << "6. Clear All Elements\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    /*
        1:Create an application for storing int values in vector.
        Create menu drivin app for following menu;
        1:add 2:show all 3:search 4:sort 5:reverse 6:clear
    */
    vector<int> numbers;
    int choice;
    int value;

    do {
        displayMenu();
        cin >> choice;

        // Basic input validation
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = -1; // Set to an invalid choice to loop again
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter an integer to add: ";
                cin >> value;
                if (cin.fail()) {
                    cout << "Invalid input. Please enter an integer.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    numbers.push_back(value);
                    cout << value << " added successfully.\n";
                }
                break;

            case 2:
                if (numbers.empty()) {
                    cout << "Vector is empty.\n";
                } else {
                    cout << "Elements in vector: ";
                    for (int num : numbers) {
                        cout << num << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (numbers.empty()) {
                    cout << "Vector is empty. Cannot search.\n";
                } else {
                    cout << "Enter value to search for: ";
                    cin >> value;
                     if (cin.fail()) {
                        cout << "Invalid input. Please enter an integer.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    } else {
                        auto it = find(numbers.begin(), numbers.end(), value);
                        if (it != numbers.end()) {
                            cout << value << " found in the vector.\n";
                        } else {
                            cout << value << " not found in the vector.\n";
                        }
                    }
                }
                break;

            case 4:
                if (numbers.empty()) {
                    cout << "Vector is empty. Cannot sort.\n";
                } else {
                    sort(numbers.begin(), numbers.end());
                    cout << "Vector sorted successfully.\n";
                }
                break;

            case 5:
                if (numbers.empty()) {
                    cout << "Vector is empty. Cannot reverse.\n";
                } else {
                    reverse(numbers.begin(), numbers.end());
                    cout << "Vector reversed successfully.\n";
                }
                break;

            case 6:
                numbers.clear();
                cout << "Vector cleared successfully.\n";
                break;

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

