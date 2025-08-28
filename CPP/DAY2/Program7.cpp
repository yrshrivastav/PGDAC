#include<iostream>
#include <cmath>
using namespace std;

int main(){
    /*7. Write a menu driven program to do following operations :
        a) Compute area of circle
        b) Compute area of rectangle
        c) Compute area of triangle
        d) Exit
        Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
        operation. Continue this process until user selects exit option.
    */
    int choice;
    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Compute area of Circle\n";
        cout << "2. Compute area of Rectangle\n";
        cout << "3. Compute area of Triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                double radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                double area = M_PI * radius * radius;
                cout << "Area of Circle = " << area << endl;
                break;
            }
            case 2: {
                double length, breadth;
                cout << "Enter length and breadth of rectangle: ";
                cin >> length >> breadth;
                double area = length * breadth;
                cout << "Area of Rectangle = " << area << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter base and height of triangle: ";
                cin >> base >> height;
                double area = 0.5 * base * height;
                cout << "Area of Triangle = " << area << endl;
                break;
            }
            case 4:
                cout << "Exiting program!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while(choice != 4);

    return 0;
}