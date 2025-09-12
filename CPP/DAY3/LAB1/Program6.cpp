#include<iostream>
using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;

public:
    // Default Constructor
    ComplexNumber() {
        real = 0.0f;
        imaginary = 0.0f;
    }

    // Parameterized Constructor
    ComplexNumber(float real, float imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Setters
    void setReal(float real) {
        this->real = real;
    }

    void setImaginary(float imaginary) {
        this->imaginary = imaginary;
    }

    // Getters
    float getReal() {
        return real;
    }

    float getImaginary() {
        return imaginary;
    }

    // Display function
    void display() {
        cout << "\n--- Complex Number ---\n";
        cout << "Number: " << real;
        if (imaginary >= 0) {
            cout << " + " << imaginary << "i" << endl;
        } else {
            cout << " - " << -imaginary << "i" << endl;
        }
    }
};

int main() {
    /*
        Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized 
        constructors. Write getters and setters for all the data members. Also add the display function. 
        Create the object of this class in main method and invoke all the methods in that class.
    */

    cout << "Creating c1 with default constructor and using setters...";
    ComplexNumber c1;
    c1.display(); // Display initial default values
    c1.setReal(5.5f);
    c1.setImaginary(-3.2f);
    cout << "\nAfter setting new values for c1:";
    c1.display();

    cout << "\nUsing getters for c1:";
    cout << "\nReal Part: " << c1.getReal();
    cout << "\nImaginary Part: " << c1.getImaginary() << endl;

    cout << "\nCreating c2 with parameterized constructor...";
    ComplexNumber c2(2.0f, 8.5f);
    c2.display();
    
    return 0;
}
