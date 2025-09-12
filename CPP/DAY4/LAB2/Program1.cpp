#include <iostream>
#include <string>
using namespace std;

// Base Employee Class
class Emp {
protected:
    int id;
    string name;
    int deptId;
    double basicSalary;

public:
    Emp(int id, string name, int deptId, double basicSalary) {
        this->id = id;
        this->name = name;
        this->deptId = deptId;
        this->basicSalary = basicSalary;
    }

    virtual void display() {
        cout << "ID: " << id << ", Name: " << name << ", Dept ID: " << deptId;
    }

    // Virtual function for computing net salary
    virtual double computeNetSalary() {
        return basicSalary; // Base implementation
    }

    // Virtual destructor for proper cleanup
    virtual ~Emp() {}
};

// Manager Class inheriting from Emp
class Mgr : public Emp {
private:
    double perfBonus;

public:
    Mgr(int id, string name, int deptId, double basicSalary, double perfBonus)
        : Emp(id, name, deptId, basicSalary) {
        this->perfBonus = perfBonus;
    }

    void display() override {
        Emp::display();
        cout << ", Type: Manager, Bonus: " << perfBonus;
    }

    // Overriding computeNetSalary for Manager
    double computeNetSalary() override {
        return basicSalary + perfBonus;
    }
};

// Worker Class inheriting from Emp
class Worker : public Emp {
private:
    int hoursWorked;
    double hourlyRate;

public:
    Worker(int id, string name, int deptId, double basicSalary, int hoursWorked, double hourlyRate)
        : Emp(id, name, deptId, basicSalary) {
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }

    void display() override {
        Emp::display();
        cout << ", Type: Worker, Hours Worked: " << hoursWorked << ", Hourly Rate: " << hourlyRate;
    }

    // Overriding computeNetSalary for Worker
    double computeNetSalary() override {
        return basicSalary + (hoursWorked * hourlyRate);
    }

    // Getter for hourly rate
    double getHourlyRate() {
        return hourlyRate;
    }
};

int main() {
    /*
    Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.
    Create Emp based organization structure --- Emp , Mgr , Worker
    */

    Emp* org[10]; // Array of base class pointers to hold all employees
    int empCount = 0;
    int choice;

    do {
        cout << "\n---- Organization Menu ----" << endl;
        cout << "1. Hire Manager" << endl;
        cout << "2. Hire Worker" << endl;
        cout << "3. Display all employees and their net salaries" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { // Hire Manager
                if (empCount < 10) {
                    int id, deptId;
                    string name;
                    double basic, bonus;
                    cout << "Enter Manager Details (ID Name DeptID BasicSalary PerfBonus): ";
                    cin >> id >> name >> deptId >> basic >> bonus;
                    org[empCount++] = new Mgr(id, name, deptId, basic, bonus);
                    cout << "Manager hired successfully." << endl;
                } else {
                    cout << "Organization is full. Cannot hire more employees." << endl;
                }
                break;
            }
            case 2: { // Hire Worker
                if (empCount < 10) {
                    int id, deptId, hours;
                    string name;
                    double basic, rate;
                    cout << "Enter Worker Details (ID Name DeptID BasicSalary HoursWorked HourlyRate): ";
                    cin >> id >> name >> deptId >> basic >> hours >> rate;
                    org[empCount++] = new Worker(id, name, deptId, basic, hours, rate);
                    cout << "Worker hired successfully." << endl;
                } else {
                    cout << "Organization is full. Cannot hire more employees." << endl;
                }
                break;
            }
            case 3: { // Display all employees
                if (empCount == 0) {
                    cout << "No employees in the organization." << endl;
                } else {
                    cout << "\n--- Employee Details ---" << endl;
                    for (int i = 0; i < empCount; ++i) {
                        org[i]->display();
                        cout << ", Net Salary: " << org[i]->computeNetSalary() << endl;
                    }
                }
                break;
            }
            case 4: { // Exit
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 4);

    // Clean up dynamically allocated memory
    for (int i = 0; i < empCount; ++i) {
        delete org[i];
    }

    return 0;
}

