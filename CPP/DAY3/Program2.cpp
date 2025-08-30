#include<iostream>
using namespace std;

int main(){
    /*
        Write a program to Accept a number and display its sum of digits.
    */

    int number, temp, digits, sumOfDigits=0;
    cout<<"Enter the number to find its sum of digits: "<<endl;
    cin>>number;
    temp = number;
    while(temp!=0){
        digits = temp % 10;
        sumOfDigits += digits;
        temp = temp / 10;
    }
    cout<<"Sum of digits of "<<number<<" : "<<sumOfDigits<<endl;
    return 0;
}