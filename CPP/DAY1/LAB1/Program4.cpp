#include <iostream>
using namespace std;

int main(){
    //Check for even or odd
    int number;
    cout<<"Enter number to check for even or odd"<<endl;
    cin>>number;
    if(number%2==0){
        cout<<"Given Number ("<<number<<") is even"<<endl;
    }
    else{
        cout<<"Given Number ("<<number<<") is odd"<<endl;
    }
    
    return 0;
}