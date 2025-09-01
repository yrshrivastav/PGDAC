#include<iostream>
using namespace std;

inline int areaOfSquare(int num)
    {
    return num * num;
    }

int main(){
    /*
        Write a program using inline functions to calculate:

        Area of a square (side × side)

    */
    int side = 0;
    cout<<"Enter side of square to find its area : ";
    cin>>side;
    cout<<"Area of square : "<<areaOfSquare(side)<<endl;


    return 0;
}
