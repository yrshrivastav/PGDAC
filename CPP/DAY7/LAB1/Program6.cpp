#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cstdio> // For remove() and rename()

using namespace std;



class Product {
private:
    int prdid;
    char name[50]; // Using char array for fixed-size records
    int qty;
    double price;

public:
    void addProduct() {
        cout << "Enter Product ID: ";
        cin >> prdid;
        cout << "Enter Product Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before getline
        cin.getline(name, 50);
        cout << "Enter Quantity: ";
        cin >> qty;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct() const {
        cout << "ID: " << prdid << "\t| Name: " << name << "\t| Qty: " << qty << "\t| Price: " << price << endl;
    }

    int getID() const {
        return prdid;
    }
};

// Function Prototypes
void writeProductToFile();
void displayAllProducts();
void searchProductByID();
void updateProductByID();
void deleteProductByID();
void displayMenu();

const string FILENAME = "products.dat";

int main() {

    /*
        6: Create CRUD Shop Application Using  File
        Write class Product with data member prdid,name,qty,price;
            Menus:
            1:Add Prd
            2:Display Prds
            3:Search Prd
            4:Update/Modify prd
            5:delete prd
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

        switch (choice) {
            case 1:
                writeProductToFile();
                break;
            case 2:
                displayAllProducts();
                break;
            case 3:
                searchProductByID();
                break;
            case 4:
                updateProductByID();
                break;
            case 5:
                deleteProductByID();
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

void displayMenu() {
    cout << "\n--- CRUD Shop Application ---\n";
    cout << "1. Add Product\n";
    cout << "2. Display All Products\n";
    cout << "3. Search for a Product by ID\n";
    cout << "4. Update a Product\n";
    cout << "5. Delete a Product\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

void writeProductToFile() {
    Product prd;
    // Open file in binary and append mode
    ofstream outFile(FILENAME, ios::binary | ios::app);
    if (!outFile) {
        cerr << "Error: Could not open file for writing.\n";
        return;
    }
    prd.addProduct();
    // Write the object to the file
    outFile.write(reinterpret_cast<char*>(&prd), sizeof(Product));
    outFile.close();
    cout << "Product added successfully.\n";
}

void displayAllProducts() {
    Product prd;
    ifstream inFile(FILENAME, ios::binary);
    if (!inFile) {
        cout << "No products found. File might not exist yet.\n";
        return;
    }
    cout << "\n--- All Product Details ---\n";
    // Read and display each product until the end of the file
    while (inFile.read(reinterpret_cast<char*>(&prd), sizeof(Product))) {
        prd.displayProduct();
    }
    inFile.close();
}

void searchProductByID() {
    int id;
    bool found = false;
    Product prd;
    cout << "Enter Product ID to search for: ";
    cin >> id;

    ifstream inFile(FILENAME, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open file for reading.\n";
        return;
    }

    while (inFile.read(reinterpret_cast<char*>(&prd), sizeof(Product))) {
        if (prd.getID() == id) {
            cout << "Product found:\n";
            prd.displayProduct();
            found = true;
            break;
        }
    }
    inFile.close();

    if (!found) {
        cout << "Product with ID " << id << " not found.\n";
    }
}

void updateProductByID() {
    int id;
    bool found = false;
    Product prd;
    cout << "Enter Product ID to update: ";
    cin >> id;

    fstream file(FILENAME, ios::in | ios::out | ios::binary);
    if (!file) {
        cerr << "Error: Could not open file.\n";
        return;
    }

    while (file.read(reinterpret_cast<char*>(&prd), sizeof(Product))) {
        if (prd.getID() == id) {
            cout << "Product found. Enter new details:\n";
            prd.addProduct();
            
            // Move the put pointer to the beginning of the record we just read
            long long pos = -1 * static_cast<long long>(sizeof(Product));
            file.seekp(pos, ios::cur);
            
            // Write the updated record over the old one
            file.write(reinterpret_cast<char*>(&prd), sizeof(Product));
            found = true;
            cout << "Product updated successfully.\n";
            break;
        }
    }
    file.close();

    if (!found) {
        cout << "Product with ID " << id << " not found.\n";
    }
}

void deleteProductByID() {
    int id;
    bool found = false;
    Product prd;
    cout << "Enter Product ID to delete: ";
    cin >> id;

    ifstream inFile(FILENAME, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open source file.\n";
        return;
    }
    
    // Create a temporary file
    ofstream outFile("temp.dat", ios::binary);

    while (inFile.read(reinterpret_cast<char*>(&prd), sizeof(Product))) {
        // Write all records to the temp file except the one to be deleted
        if (prd.getID() != id) {
            outFile.write(reinterpret_cast<char*>(&prd), sizeof(Product));
        } else {
            found = true;
        }
    }

    inFile.close();
    outFile.close();

    // Delete the original file and rename the temp file
    remove(FILENAME.c_str());
    rename("temp.dat", FILENAME.c_str());

    if (found) {
        cout << "Product deleted successfully.\n";
    } else {
        cout << "Product with ID " << id << " not found.\n";
    }
}

