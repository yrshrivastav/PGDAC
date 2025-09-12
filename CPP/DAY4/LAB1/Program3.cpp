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

class EmployeeInfo {
private:
    int id;
    string name;
    Date dob; // Composition: Employee has-a Date

public:
    // Default constructor
    EmployeeInfo() {
        id = 0;
        name = "Default";
        // dob will be initialized by its own default constructor
    }

    // Parameterized constructor
    EmployeeInfo(int id, string name, int d, int m, int y) : dob(d, m, y) {
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

class Employee {
private:
    int employeeId;
    string employeeName;
    double basicSalary;
    double hra;
    double medical;
    double pf;
    double pt;
    double netSalary;
    double grossSalary;

    void calculateSal() {
        hra = 0.50 * basicSalary;
        pf = 0.12 * basicSalary;
        grossSalary = basicSalary + hra + medical;
        netSalary = grossSalary - (pt + pf);
    }

public:
    Employee(int id, string name, double basic) {
        employeeId = id;
        employeeName = name;
        basicSalary = basic;
        medical = 1000;
        pt = 200;
        calculateSal(); // Calculate salaries upon object creation
    }

    void displayDetails() {
        cout << "\n--- Employee Payroll Details ---\n";
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "Medical: " << medical << endl;
        cout << "PF: " << pf << endl;
        cout << "PT: " << pt << endl;
        cout << "--------------------------------" << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};


int main() {
    /*
     3:Consider that payroll software needs to be developed for computerization of
    operations of an ABC organization. The organization has employees.
    3.1. Construct a class Employee with following members using private access
    specifies:
     Employee Id integer
     Employee Name string
     Basic Salary double
     HRA double
     Medical double=1000
     PF double
    PT double
     Net Salary double
     Gross Salary double
    Please use following expressions for calculations://Note:Don't accept HRA,PF PT from user
     * HRA = 50% of Basic Salary
    * PF = 12% of Basic Salary
    * PT = Rs. 200

    3.2. Write methods to display the details of an employee and calculate the gross
    and net salary.
    * Goss Salary = Basic Salary + HRA + Medical
    * Net Salary = Gross Salary – (PT + PF)

    Create Object of employee class and assign values and display Details.
    */

    Employee emp1(101, "Yash Raj", 50000);
    emp1.displayDetails();
    
    return 0;
}

