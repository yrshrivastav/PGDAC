#include<iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // No-argument constructor
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Parameterized constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Display function
    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    /*
        1:Create Date class with members day,month ,year.
        Write no argument and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor
        respectively.Print date using display function.
    */

    cout << "Creating date1 with no-argument constructor:" << endl;
    Date date1;
    date1.display();

    cout << "\nCreating date2 with parameterized constructor:" << endl;
    Date date2(12, 9, 2025);
    date2.display();

    return 0;
}

