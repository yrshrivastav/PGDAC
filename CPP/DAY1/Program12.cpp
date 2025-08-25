#include <iostream>
using namespace std;

int main(){
    //Sum of Series
    int number;
    cout<<"Enter the number of terms to find series sum: "<<endl;
    cin>>number;
    int sum=0;
    for(int i=1;i<=number;i++){
        sum=sum+i;
    }
    cout<<"Sum of series is: "<<sum<<endl;
    
}