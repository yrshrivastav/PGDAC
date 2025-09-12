#include<iostream>
using namespace std;

class Student {
private:
    int rollno;
    float marks1, marks2, marks3;

public:
    void acceptInfo();
    void display();
};

void Student::acceptInfo() {
    cout << "Enter Roll No: ";
    cin >> rollno;
    cout << "Enter Marks for Subject 1: ";
    cin >> marks1;
    cout << "Enter Marks for Subject 2: ";
    cin >> marks2;
    cout << "Enter Marks for Subject 3: ";
    cin >> marks3;
}

void Student::display() {
    cout << "\n--- Student Details ---\n";
    cout << "Roll No: " << rollno << endl;
    cout << "Marks 1: " << marks1 << endl;
    cout << "Marks 2: " << marks2 << endl;
    cout << "Marks 3: " << marks3 << endl;

    float total = marks1 + marks2 + marks3;
    float percentage = (total / 300.0f) * 100.0f;
    char grade;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
}


int main(){
    /*
        1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
        Accept data (acceptInfo()) and display  using display member function.
        Also display total,percentage and grade.

    */
   
    Student s1;
    s1.acceptInfo();
    s1.display();
    
    return 0;
}