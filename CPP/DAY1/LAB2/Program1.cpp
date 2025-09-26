#include<iostream>
using namespace std;

int main(){
    //Write a program that accepts numbers continuously as long as the number is positive and prints the sum of the given numbers
    int number;
    int sum = 0;
    do{
        cout<<"Enter numbers to add"<<endl;
        cin>>number;
        sum += number;
    }
    while(number>=0);
    // while(number>=0){
    //     cout<<"Enter numbers to add"<<endl;
    //     cin>>number;
    //     sum += number;
    // }
    cout<<"Sum of the numbers provided is: "<<sum<<endl;
    return 0;
}