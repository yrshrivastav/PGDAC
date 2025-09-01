#include<iostream>
using namespace std;

inline double areaOfCircle(int radius)
    {
    double pi = 3.14159;
    return pi*radius*radius;
    }

int main(){
    /*
        Write a program using inline functions to calculate:

        Area of a circle (π × r × r, use π = 3.14159)

    */
    double radius=0.0;
    cout<<"Enter radius of circle to find its area : ";
    cin>>radius;
    cout<<"Area of Circle : "<<areaOfCircle(radius)<<endl;


    return 0;
}
