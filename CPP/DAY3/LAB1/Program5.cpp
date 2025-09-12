#include<iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default Constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized Constructor
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Setters
    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    // Getters
    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    // Display function
    void display() {
        cout << "\n--- Point Coordinates ---\n";
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    /*
        Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
        getters and setters for all the data members. Also add the display function. Create the object of this 
        class in main method and invoke all the methods in that class. 
    */

    cout << "Creating point1 with default constructor and using setters...";
    Point point1;
    point1.display(); // Display initial default values
    point1.setX(10);
    point1.setY(20);
    cout << "\nAfter setting new values for point1:";
    point1.display();

    cout << "\nUsing getters for point1:";
    cout << "\nX-coordinate: " << point1.getX();
    cout << "\nY-coordinate: " << point1.getY() << endl;

    cout << "\nCreating point2 with parameterized constructor...";
    Point point2(5, 15);
    point2.display();
    
    return 0;
}
