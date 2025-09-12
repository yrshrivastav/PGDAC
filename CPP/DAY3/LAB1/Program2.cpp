#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string city;

public:
    Person() {
        name = "";
        age = 0;
        city = "";
    }

    Person(string name, int age, string city) {
        this->name = name;
        this->age = age;
        this->city = city;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setCity(string city) {
        this->city = city;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCity() {
        return city;
    }

    void display() {
        cout << "\n--- Person Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {
    /*
        1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
        members. Also add the display function. Create Default and Parameterized constructors. Create the 
        object of this class in main method and invoke all the methods in that class. 
    */

    cout << "Creating object p1 with default constructor and using setters...";
    Person p1;
    p1.setName("John Doe");
    p1.setAge(30);
    p1.setCity("New York");
    p1.display();

    cout << "\nUsing getters for p1:";
    cout << "\nName: " << p1.getName();
    cout << "\nAge: " << p1.getAge();
    cout << "\nCity: " << p1.getCity() << endl;

    cout << "\nCreating object p2 with parameterized constructor...";
    Person p2("Jane Smith", 25, "London");
    p2.display();
    
    return 0;
}
