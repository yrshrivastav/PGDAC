#include <iostream>
using namespace std;


int isPrime(int n){
    int count=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}

int main(){
    //print all prime numbers between 1 to n
    int number;
    cout<<"Enter the number of terms to find prime numbers: "<<endl;
    cin>>number;
    cout<<"Prime numbers are:";
    for(int i=1;i<=number;i++){
        if(i==1){
            continue;
        }
        else{
            int count=isPrime(i);
            if(count==0){
                cout<<"\t"<<i;
            }
        }
    }
    cout<<endl;
}
