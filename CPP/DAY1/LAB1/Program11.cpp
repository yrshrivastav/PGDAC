#include <iostream>
using namespace std;

int main(){
    //check for prime or not
    int number;
    int count=0;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    for(int i=2;i<=number/2;i++){
        if(number%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
}