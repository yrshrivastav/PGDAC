#include <iostream>
#include <string>
using namespace std;



template <typename T>
class Box {
private:
    T value;

public:
    // Setter method
    void setValue(const T &val) {
        value = val;
    }

    // Getter method
    T getValue() const {
        return value;
    }
};

int main() {

    /*
        3: Class Template – Box
        Implement a class template Box<T> that stores one value of any type and provides
        getValue() and setValue() methods.
    */
    cout << "--- Testing Box<T> Class Template ---\n";

    // Create a Box for an integer
    Box<int> intBox;
    intBox.setValue(123);
    cout << "\nValue in intBox: " << intBox.getValue() << endl;

    // Create a Box for a double
    Box<double> doubleBox;
    doubleBox.setValue(45.67);
    cout << "Value in doubleBox: " << doubleBox.getValue() << endl;

    // Create a Box for a string
    Box<string> stringBox;
    stringBox.setValue("Hello, Template!");
    cout << "Value in stringBox: " << stringBox.getValue() << endl;

    return 0;
}

