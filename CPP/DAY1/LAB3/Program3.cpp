#include<iostream>
using namespace std;

int main(){
    //print sum of all even numbers and odd numbers from 1 to n
    int number;
    cout<<"Enter number : "<<endl;
    cin>>number;
    int evenSum=0, oddSum=0;
    for(int i=1;i<=number;i++){
        if(i==1){
            oddSum+=i;
        }
        else if(i%2==0){
            evenSum+=i;
        }
        else{
            oddSum+=i;
        }
    }
    cout<<"Sum of all even numbers : "<<evenSum<<endl;
    cout<<"Sum of all odd numbers : "<<oddSum<<endl;
    return 0;
}