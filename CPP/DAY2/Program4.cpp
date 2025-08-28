#include <iostream>

using namespace std;

int main(){
    //calculate factorial of a number
    int number = 0;
    cout<<"Enter a number to find factorial "<<endl;
    cin>>number;
    int factorial=1;
    
    for (int i = number; i > 0; i--){
        factorial = factorial * i;
    }
    cout<<"Factorial :  "<<factorial<<endl;
    return 0;
}