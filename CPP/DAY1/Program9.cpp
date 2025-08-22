#include <iostream>
using namespace std;

int main(){
    //find the factorial
    int number;
    int factorial = 1;
    cout<<"Enter number to find it's factorial"<<endl;
    cin>>number;
    int temp = number;
    for(int i = temp; temp > 1; temp--){
        factorial = temp * factorial;
    }

    cout<<"Factorial of "<<number<<" : "<<factorial<<endl;

    return 0;
}