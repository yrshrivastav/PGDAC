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
    //print * pattern
    int number;
    cout<<"Enter number till which pattern to be printed : "<<endl;
    cin>>number;
    int i,j;
    for(i=1;i<=number;i++){
        for(j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}