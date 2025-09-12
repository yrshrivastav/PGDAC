#include <iostream>
#include <stdexcept> // For std::runtime_error
using namespace std;



template <typename T>
class Calculator {
public:
    T add(const T &a, const T &b) {
        return a + b;
    }

    T subtract(const T &a, const T &b) {
        return a - b;
    }

    T multiply(const T &a, const T &b) {
        return a * b;
    }

    T divide(const T &a, const T &b) {
        if (b == 0) {
            
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {

    /*
        Class Template – Calculator
        Create a class template Calculator<T> with functions:

        add(), subtract(), multiply(), divide().
        Test with int and double.
    */
    cout << "--- Testing Calculator<T> with int ---\n";
    Calculator<int> intCalc;
    int int1 = 20, int2 = 5;

    cout << int1 << " + " << int2 << " = " << intCalc.add(int1, int2) << endl;
    cout << int1 << " - " << int2 << " = " << intCalc.subtract(int1, int2) << endl;
    cout << int1 << " * " << int2 << " = " << intCalc.multiply(int1, int2) << endl;
    cout << int1 << " / " << int2 << " = " << intCalc.divide(int1, int2) << endl;


    cout << "\n--- Testing Calculator<T> with double ---\n";
    Calculator<double> doubleCalc;
    double d1 = 15.5, d2 = 2.5;

    cout << d1 << " + " << d2 << " = " << doubleCalc.add(d1, d2) << endl;
    cout << d1 << " - " << d2 << " = " << doubleCalc.subtract(d1, d2) << endl;
    cout << d1 << " * " << d2 << " = " << doubleCalc.multiply(d1, d2) << endl;
    cout << d1 << " / " << d2 << " = " << doubleCalc.divide(d1, d2) << endl;
    
    // Example of handling the division by zero error
    try {
        cout << "\nAttempting to divide by zero...\n";
        cout << d1 << " / " << 0.0 << " = " << doubleCalc.divide(d1, 0.0) << endl;
    } catch (const runtime_error &e) {
        cerr << e.what() << endl; // cerr is used for errors
    }


    return 0;
}

