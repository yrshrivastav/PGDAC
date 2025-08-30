#include <iostream>
using namespace std;

int main(){
    //find sum of all even and odd numbers between 1 to n
    int number;
    cout<<"Enter the number of terms to find even and odd number sum: "<<endl;
    cin>>number;
    int evenSum=0;
    int oddSum=0;
    for(int i=1;i<=number;i++){
        if(i%2==0){
            evenSum+=i;
        }
        else{
            oddSum+=i;
        }
    }
    cout<<"Even sum in the given range is: "<<evenSum<<endl;
    cout<<"Odd sum in the given range is: "<<oddSum<<endl;
    
}
