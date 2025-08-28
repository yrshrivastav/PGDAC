#include<iostream>
using namespace std;

int main(){
    //calculate factors of a given number
    int number;
    cout<<"Enter number to find factor for: "<<endl;
    cin>>number;
    cout<<"Factors of "<<number<<" are: ";
    for(int i=1; i<number; i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}