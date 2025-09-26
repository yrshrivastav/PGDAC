#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string bname;
    int id;
    string author;
    float price;

public:
    // Default Constructor
    Book() {
        bname = "";
        id = 0;
        author = "";
        price = 0.0f;
    }

    // Parameterized Constructor
    Book(string bname, int id, string author, float price) {
        this->bname = bname;
        this->id = id;
        this->author = author;
        this->price = price;
    }

    // Setters
    void setBname(string bname) {
        this->bname = bname;
    }

    void setId(int id) {
        this->id = id;
    }

    void setAuthor(string author) {
        this->author = author;
    }

    void setPrice(float price) {
        this->price = price;
    }

    // Getters
    string getBname() {
        return bname;
    }

    int getId() {
        return id;
    }

    string getAuthor() {
        return author;
    }

    float getPrice() {
        return price;
    }

    // Display function
    void display() {
        cout << "\n--- Book Details ---\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << bname << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    /*
        Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
        data members. Also add the display function. Create Default and Parameterized constructors. Create 
        the object of this class in main method and invoke all the methods in that class. 
    */

    cout << "Creating book1 with default constructor and using setters...";
    Book book1;
    book1.setId(101);
    book1.setBname("The C++ Programming Language");
    book1.setAuthor("Bjarne Stroustrup");
    book1.setPrice(550.0f);
    cout << "\nAfter setting values for book1:";
    book1.display();

    cout << "\nUsing getters for book1:";
    cout << "\nBook ID: " << book1.getId();
    cout << "\nBook Name: " << book1.getBname() << endl;

    cout << "\nCreating book2 with parameterized constructor...";
    Book book2("Clean Code", 102, "Robert C. Martin", 700.0f);
    book2.display();
    
    return 0;
}
