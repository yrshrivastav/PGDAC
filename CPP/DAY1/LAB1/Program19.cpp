#include <iostream>

using namespace std;

int main() {
    int choice, qty;
    int total = 0;
    char ch;

    do {
        cout << "\n---- Pizza Shop Menu ----\n";
        cout << "1. Margherita - Rs. 200\n";
        cout << "2. Farmhouse  - Rs. 300\n";
        cout << "3. Peppy Paneer - Rs. 250\n";
        cout << "4. Veggie Paradise - Rs. 280\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter quantity: ";
            cin >> qty;
        }

        switch (choice) {
            case 1:
                total += 200 * qty;
                break;
            case 2:
                total += 300 * qty;
                break;
            case 3:
                total += 250 * qty;
                break;
            case 4:
                total += 280 * qty;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }

        if (choice != 5) {
            cout << "Do you want to order more? (y/n): ";
            cin >> ch;
        } else {
            ch = 'n';
        }

    } while (ch == 'y' || ch == 'Y');

    cout << "\nTotal Amount = Rs. " << total << endl;

    return 0;
}




























/*
#include <iostream>
using namespace std;

int main(){
    //menu driven program for pizza shop
    int choice;
    cout<<"-----Pizza Shop-----"<<endl;
    cout<<"-----Menu-----"<<endl;
    cout<<"Press 1 for Order \t Press 2 for Total Bil"<<endl;
    

    while(choice!=0){
        cin>>choice;
        switch(choice){
            case 1: 
                    cout<<"Order here"<<endl;
                    break;
            case 2:
                    cout<<"Total bill"<<endl;
                    break;
            default:
                    cout<<"Wrong choice!"<<endl;
        }
    }
    
    return 0;

}
*/