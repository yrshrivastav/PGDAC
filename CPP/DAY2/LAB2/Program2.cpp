#include<iostream>
using namespace std;

inline int areaOfRec(int length, int breadth)
    {
    return length * breadth;
    }

int main(){
    /*
        Write a program using inline functions to calculate:

        Area of a rectangle (length × breadth)

    */
    int breadth=0, length = 0;
    cout<<"Enter length of rectangle and breadth of rectangle to find its area : ";
    cin>>length;
    cin>>breadth;
    cout<<"Area of rectangle : "<<areaOfRec(length,breadth)<<endl;


    return 0;
}
