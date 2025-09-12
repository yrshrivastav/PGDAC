#include <iostream>
#include <vector>
#include <string>
#include <stdexcept> 

using namespace std;



template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    // Check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Push an element onto the stack
    void push(const T &value) {
        elements.push_back(value);
    }

    // Pop (remove) the top element from the stack
    void pop() {
        if (isEmpty()) {
            throw runtime_error("Error: Cannot pop from an empty stack.");
        }
        elements.pop_back();
    }

    // Peek at the top element without removing it
    T peek() const {
        if (isEmpty()) {
            throw runtime_error("Error: Cannot peek at an empty stack.");
        }
        return elements.back();
    }
};

int main() {

    /*
        6: Class Template – Stack
        Implement a class template Stack<T> with functions:

        push(), pop(), peek(), isEmpty().
        Test with int and string.
    */
    cout << "--- Testing Stack<T> with int ---\n";
    Stack<int> intStack;

    cout << "Is stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Pushing 10, 20, 30...\n";
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Is stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Top element (peek): " << intStack.peek() << endl;

    cout << "Popping an element...\n";
    intStack.pop();
    cout << "Top element after pop: " << intStack.peek() << endl;

    cout << "\n--- Testing Stack<T> with string ---\n";
    Stack<string> stringStack;

    cout << "Pushing 'Hello', 'World'...\n";
    stringStack.push("Hello");
    stringStack.push("World");

    cout << "Top element (peek): " << stringStack.peek() << endl;
    
    cout << "Popping an element...\n";
    stringStack.pop();
    cout << "Top element after pop: " << stringStack.peek() << endl;
    
    cout << "Popping another element...\n";
    stringStack.pop();
    
    // Example of handling an error when peeking an empty stack
    try {
        cout << "Attempting to peek at empty stack...\n";
        cout << stringStack.peek() << endl;
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
    }

    return 0;
}

