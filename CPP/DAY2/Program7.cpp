#include<iostream>
using namespace std;

int main(){
    /*7. Write a menu driven program to do following operations :
        a) Compute area of circle
        b) Compute area of rectangle
        c) Compute area of triangle
        d) Exit
        Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
        operation. Continue this process until user selects exit option.
    */
    int number1;
    int number2;
    
    cout<<"Enter number1 and number2 to find gcd : "<<endl;
    cin>>number1;
    cin>>number2;
    int common;
    int i,j;
    cout<<"GCD of "<<number1<<" and "<<number2<<" : ";
    for( i=number1/2; i>0; i--){
        if(number1%i==0){
            for( j=i;j<=i;j++){
                if(number2%j==0){
                    cout<<j<<" ";
                    i=0;
                    break;
                }
            }    
        }
    }
    cout<<endl;
    return 0;
}