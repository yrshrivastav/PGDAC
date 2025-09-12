#include <iostream>
#include <string>

using namespace std;



// Define the CDAC namespace
namespace CDAC {
    class Student {
    private:
        string name;
        string prn;

    public:
        Student(string n, string p) : name(n), prn(p) {}

        void display() const {
            cout << "--- CDAC Student ---" << endl;
            cout << "Name: " << name << endl;
            cout << "PRN: " << prn << endl;
        }
    };
}

// Define the IACSD namespace
namespace IACSD {
    class Student {
    private:
        string name;
        int rollNo;

    public:
        Student(string n, int r) : name(n), rollNo(r) {}

        void display() const {
            cout << "\n--- IACSD Student ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
        }
    };
}

int main() {

    /*
        7:Create Student class in namespace CDAC namespace .
            Create another Student class in IACSD namespace.
            Try to access both student classes using namespace
    */

    // Create an object of the Student class from the CDAC namespace
    CDAC::Student cdac_student("Rohan Sharma", "240340120100");
    
    // Create an object of the Student class from the IACSD namespace
    IACSD::Student iacsd_student("Priya Singh", 55);

    // Display details of the CDAC student
    cdac_student.display();

    // Display details of the IACSD student
    iacsd_student.display();
    
    return 0;
}

