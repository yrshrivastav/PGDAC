#include <iostream>
using namespace std;

int reverse(int n){
    int reverse = 0;
    while(n!=0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n=n/10;
    }
    return reverse;
}

int main(){
    //check for palindrome
    int number;
    cout<<"Enter the number to check for palindrome: "<<endl;
    cin>>number;
    int reverseNumber = reverse(number);
    if(reverseNumber == number){
        cout<<"The number is a palindrome"<<endl;
    }
    else{
        cout<<"The number is not a palindrome"<<endl;
    }
    
}