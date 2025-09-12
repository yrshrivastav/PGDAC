#include <iostream>
#include <deque>
#include <string>
#include <stdexcept> // For std::runtime_error

using namespace std;

template <typename T>
class Queue {
private:
    // Using std::deque is efficient for queue operations
    deque<T> elements;

public:
    // Check if the queue is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Add an element to the back of the queue
    void enqueue(const T &value) {
        elements.push_back(value);
    }

    // Remove the element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            throw runtime_error("Error: Cannot dequeue from an empty queue.");
        }
        elements.pop_front();
    }

    // Get the front element without removing it
    T front() const {
        if (isEmpty()) {
            throw runtime_error("Error: Cannot get front element from an empty queue.");
        }
        return elements.front();
    }
};

int main() {
    /*
        7: Class Template – Queue
        Implement a class template Queue<T> with functions:
        enqueue(), dequeue(), front(), isEmpty().
    */
    cout << "--- Testing Queue<T> with int ---\n";
    Queue<int> intQueue;

    cout << "Is queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << endl;
    cout << "Enqueuing 10, 20, 30...\n";
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    cout << "Is queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << endl;
    cout << "Front element: " << intQueue.front() << endl;

    cout << "Dequeuing an element...\n";
    intQueue.dequeue();
    cout << "Front element after dequeue: " << intQueue.front() << endl;

    cout << "\n--- Testing Queue<T> with string ---\n";
    Queue<string> stringQueue;

    cout << "Enqueuing 'First', 'Second', 'Third'...\n";
    stringQueue.enqueue("First");
    stringQueue.enqueue("Second");
    stringQueue.enqueue("Third");

    cout << "Front element: " << stringQueue.front() << endl;
    
    cout << "Dequeuing an element...\n";
    stringQueue.dequeue();
    cout << "Front element after dequeue: " << stringQueue.front() << endl;
    
    cout << "Dequeuing another element...\n";
    stringQueue.dequeue();
    cout << "Front element after dequeue: " << stringQueue.front() << endl;

    // Example of handling an error on an empty queue
    try {
        cout << "\nDequeuing last element...\n";
        stringQueue.dequeue();
        cout << "Attempting to get front of empty queue...\n";
        cout << stringQueue.front() << endl;
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
    }

    return 0;
}

