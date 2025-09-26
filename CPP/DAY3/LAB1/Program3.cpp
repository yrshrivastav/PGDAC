#include<iostream>
using namespace std;

class Date {
private:
    int dd, mm, yy;

public:
    // Default Constructor
    Date() {
        dd = 1;
        mm = 1;
        yy = 2000;
    }

    // Parameterized Constructor
    Date(int dd, int mm, int yy) {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }

    // Setters
    void setDd(int dd) {
        this->dd = dd;
    }

    void setMm(int mm) {
        this->mm = mm;
    }

    void setYy(int yy) {
        this->yy = yy;
    }

    // Getters
    int getDd() {
        return dd;
    }

    int getMm() {
        return mm;
    }

    int getYy() {
        return yy;
    }

    // Display function
    void display() {
        cout << "\n--- Date Details ---\n";
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    /*
        Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. 
        Also add the display function. Create Default and Parameterized constructors. Create the 
        object of this class in main method and invoke all the methods in that class. 
    */

    cout << "Creating date1 with default constructor and using setters...";
    Date date1;
    date1.display(); // Display initial default values
    date1.setDd(15);
    date1.setMm(8);
    date1.setYy(1947);
    cout << "\nAfter setting new values for date1:";
    date1.display();

    cout << "\nUsing getters for date1:";
    cout << "\nDay: " << date1.getDd();
    cout << "\nMonth: " << date1.getMm();
    cout << "\nYear: " << date1.getYy() << endl;

    cout << "\nCreating date2 with parameterized constructor...";
    Date date2(2, 10, 1869);
    date2.display();
    
    return 0;
}
