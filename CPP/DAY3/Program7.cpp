#include<iostream>
using namespace std;


//Student class
class Student{
    private:    int rollno;
                int marks1;
                int marks2;
                int marks3;
    
    public:     Student(){
                    rollno = 0;
                    marks1 = 0;
                    marks2 = 0;
                    marks3 = 0;
                    cout<<"Default constructor called by and Student object created successfully"<<endl;
                }

                Student(int rollno, int marks1, int marks2, int marks3)
                        : rollno(rollno), marks1(marks1), marks2(marks2), marks3(marks3){
                        cout<<"Parametrized constructor called by and Student object created successfully"<<endl;
                }

                void acceptInfo(int rollno, int marks1, int marks2, int marks3){
                    cout<<"Student object updated successfully"<<endl;
                    this->rollno=rollno;
                    this->marks1=marks1;
                    this->marks2=marks2;
                    this->marks3=marks3;
                }

                void display(){
                    cout<<"Roll No : "<<this->rollno<<endl;
                    cout<<"Marks1 : "<<this->marks1<<endl;
                    cout<<"Marks2 : "<<this->marks2<<endl;
                    cout<<"Marks3 : "<<this->marks3<<endl;
                }

                void totalMarks(){
                    cout<<"Total marks of Student: "<<(this->marks1 + this->marks2 + this->marks3)<<"/300"<<endl;
                }

                int percentage(){
                    return (this->marks1 + this->marks2 + this->marks3)/3;
                }
};
int main(){
    /*
        Write a program to create student class with data members rollno, marks1,mark2,mark3.
        Accept data (acceptInfo()) and display  using display member function.
        Also display total,percentage and grade
    */
    Student s;
    int rollno, marks1, marks2, marks3;
    cout<<"Enter Student roll no: ";
    cin>>rollno;
    cout<<"Enter Student marks1 : ";
    cin>>marks1;
    cout<<"Enter Student marks2 : ";
    cin>>marks2;
    cout<<"Enter Student marks2 : ";
    cin>>marks3;
    s.acceptInfo(rollno, marks1, marks2, marks3);
    s.display();
    s.totalMarks();
    cout<<"Percentage of Student: ";
    int percentage=s.percentage();
    cout<<percentage<<endl;
    cout<<"Student Grade : ";
    if(percentage>=91 && percentage<=100){
        cout<<"O"<<endl;
    }
    else if(percentage>=81 && percentage<=90){
        cout<<"A"<<endl;
    }
    else if(percentage>=71 && percentage<=80){
        cout<<"B"<<endl;
    }
    else if(percentage>=61 && percentage<=70){
        cout<<"C"<<endl;
    }
    else if(percentage>=51 && percentage<=60){
        cout<<"D"<<endl;
    }
    else if(percentage>=41 && percentage<=80){
        cout<<"E"<<endl;
    }
    else{
        cout<<"You failed! Try hard"<<endl;
    }
    return 0;
}