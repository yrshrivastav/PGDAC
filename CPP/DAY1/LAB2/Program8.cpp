#include<iostream>
using namespace std;


int isPrime(int num){
    int count=0;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            count++;
        }
    }
    return count;
}

int main(){
    //print all prime numbers between 1 to n
    int number;
    cout<<"Enter number till which prime number to be find : "<<endl;
    cin>>number;
    cout<<"Prime numbers between 1 and "<<number<<" are : ";
    for(int i=1;i<=number;i++){
        if(i==1){
            continue;
        }
        else{
            int count=isPrime(i);
            if(count==0){
                cout<<i<<", ";
            }
        }
    }
    cout<<endl;
    return 0;
}