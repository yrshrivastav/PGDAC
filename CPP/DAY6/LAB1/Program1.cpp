#include <iostream>
#include <string>
using namespace std;



// Function Template – Swap
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    /*
        Function Template – Swap
        Write a function template swapValues() that swaps two variables of any type.
        Test with int, double, and string.
    */
    cout << "--- Testing swapValues() Template ---\n";

    // Test with integers
    int a = 10, b = 20;
    cout << "\nBefore swap (int): a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap (int):  a = " << a << ", b = " << b << endl;

    // Test with doubles
    double x = 5.5, y = 9.9;
    cout << "\nBefore swap (double): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap (double):  x = " << x << ", y = " << y << endl;

    // Test with strings
    string s1 = "Hello", s2 = "World";
    cout << "\nBefore swap (string): s1 = " << s1 << ", s2 = " << s2 << endl;
    swapValues(s1, s2);
    cout << "After swap (string):  s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}

