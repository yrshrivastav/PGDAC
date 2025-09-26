#include <iostream>
using namespace std;



// Function Template - Maximum
template <typename T>
T findMax(const T &a, const T &b) {
    return (a > b) ? a : b;
}

int main() {
    /*
        Function Template – Maximum
        Write a function template findMax() that returns the maximum of two values.

        Test with int, float, and char.
    */
    cout << "--- Testing findMax() Template ---\n";

    // Test with integers
    int i1 = 100, i2 = 250;
    cout << "\nMax of " << i1 << " and " << i2 << " is: " << findMax(i1, i2) << endl;

    // Test with floats
    float f1 = 45.8f, f2 = 23.5f;
    cout << "Max of " << f1 << " and " << f2 << " is: " << findMax(f1, f2) << endl;

    // Test with chars
    char c1 = 'A', c2 = 'Z';
    cout << "Max of '" << c1 << "' and '" << c2 << "' is: '" << findMax(c1, c2) << "'" << endl;

    return 0;
}

