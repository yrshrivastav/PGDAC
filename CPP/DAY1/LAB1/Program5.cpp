#include <iostream>
using namespace std;

int main(){

    //Check for divisibility by 5 and 7
    int number;
    cout<<"Enter number to check divisibilty by 5 and 7"<<endl;
    cin>>number;
    if(number % 5 == 0 && number % 7 == 0){
        cout<<"Given number "<<number<<" is divisible by 5 and 7"<<endl;
    }
    else{
        cout<<"Given number "<<number<<" is not divisible by 5 and 7"<<endl;
    }

    return 0;
}