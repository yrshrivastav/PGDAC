#include <iostream>
using namespace std;



template <typename T>
T sumArray(const T arr[], int size) {
    T sum = T(); 
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    /*
        Function Template – Array Sum
        Write a function template sumArray() that accepts an array of any type and returns the sum of its elements.
    */
    cout << "--- Testing sumArray() Template ---\n";

    // Test with an integer array
    int intArray[] = {10, 20, 30, 40, 50};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    cout << "\nSum of integer array: " << sumArray(intArray, intSize) << endl;

    // Test with a double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Sum of double array: " << sumArray(doubleArray, doubleSize) << endl;
    
    // Test with a float array
    float floatArray[] = {1.5f, 2.5f, 3.5f};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    cout << "Sum of float array: " << sumArray(floatArray, floatSize) << endl;

    return 0;
}

