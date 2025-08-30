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
    //find the reverse of number
    int number;
    cout<<"Enter the number to find reverse of number: "<<endl;
    cin>>number;
    int reverseNumber = reverse(number);
    cout<<"Reverse of given number is: "<<reverseNumber<<endl;
    
}