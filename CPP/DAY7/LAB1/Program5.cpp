#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;



void displayMenu() {
    cout << "\n--- File I/O Operations Menu ---\n";
    cout << "1. Write to a file (append)\n";
    cout << "2. Read from a file\n";
    cout << "3. Copy a file\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {

    /*
        5: Create an File IO application for basic operation 
        1:Write file:accept data from user and store in file
        2:Read file:display line by line
        3:copy data from one file into another file
    */
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
                string filename, data;
                cout << "Enter filename to write to (e.g., data.txt): ";
                getline(cin, filename);

                // Open file in append mode
                ofstream outFile(filename, ios::app);

                if (!outFile) {
                    cerr << "Error: Could not open file for writing.\n";
                    break;
                }

                cout << "Enter data to write (type 'end' on a new line to stop):\n";
                while (getline(cin, data) && data != "end") {
                    outFile << data << endl;
                }

                outFile.close();
                cout << "Data successfully written to " << filename << endl;
                break;
            }
            case 2: {
                string filename, line;
                cout << "Enter filename to read from (e.g., data.txt): ";
                getline(cin, filename);

                ifstream inFile(filename);

                if (!inFile) {
                    cerr << "Error: Could not open file for reading.\n";
                    break;
                }

                cout << "\n--- Contents of " << filename << " ---\n";
                while (getline(inFile, line)) {
                    cout << line << endl;
                }
                cout << "--- End of File ---\n";

                inFile.close();
                break;
            }
            case 3: {
                string srcFilename, destFilename;
                cout << "Enter source filename: ";
                getline(cin, srcFilename);
                cout << "Enter destination filename: ";
                getline(cin, destFilename);

                ifstream srcFile(srcFilename);
                if (!srcFile) {
                    cerr << "Error: Could not open source file '" << srcFilename << "'.\n";
                    break;
                }

                ofstream destFile(destFilename);
                if (!destFile) {
                    cerr << "Error: Could not open destination file '" << destFilename << "'.\n";
                    srcFile.close();
                    break;
                }
                
                // Copy contents
                destFile << srcFile.rdbuf();

                srcFile.close();
                destFile.close();

                cout << "Successfully copied from '" << srcFilename << "' to '" << destFilename << "'.\n";
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

