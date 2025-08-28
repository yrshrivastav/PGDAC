#include<iostream>
using namespace std;

int main(){
    //Accept two numbers and calculate GCD of them
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