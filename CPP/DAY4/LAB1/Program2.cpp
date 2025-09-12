#include<iostream>
#include<string>
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

    void acceptDate() {
        cout << "Enter Day: ";
        cin >> day;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
    }

    // Display function
    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

class Employee {
private:
    int id;
    string name;
    Date dob; // Composition: Employee has-a Date

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "Default";
        // dob will be initialized by its own default constructor
    }

    // Parameterized constructor
    Employee(int id, string name, int d, int m, int y) : dob(d, m, y) {
        this->id = id;
        this->name = name;
    }

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Date of Birth: " << endl;
        dob.acceptDate();
    }

    void display() {
        cout << "\n--- Employee Information ---\n";
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Date of Birth: ";
        dob.display();
        cout << endl;
    }
};


int main() {
    /*
        1:Create Date class with members day,month ,year.
        Write no argument and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor
        respectively.Print date using display function.
        
        2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
        Write default and parameterised constructor in Employee Class.Write accept() function to accept information and display() to display emp information.
    */

    cout << "--- Creating Employee with Default Constructor ---" << endl;
    Employee emp1;
    emp1.display();

    cout << "\n--- Accepting Info for emp1 ---" << endl;
    emp1.accept();
    emp1.display();

    cout << "\n--- Creating Employee with Parameterized Constructor ---" << endl;
    Employee emp2(101, "Yash", 25, 12, 1998);
    emp2.display();


    return 0;
}

