#include <iostream>
using namespace std;

int main(){
    //Swap two numbers
    int num1;
    int num2;
    cout<<"Enter two numbers to swap"<<endl;
    cin>>num1>>num2;
    cout<<"Numbers before swap"<<endl;
    cout<<"Number 1 : "<<num1<<endl;
    cout<<"Number 2 : "<<num2<<endl;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"Numbers after swap"<<endl;
    cout<<"Number 1 : "<<num1<<endl;
    cout<<"Number 2 : "<<num2<<endl;

    return 0;
}