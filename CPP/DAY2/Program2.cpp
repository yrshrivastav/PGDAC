#include <iostream>
using namespace std;

int main(){

    //accept two integers x and n and compute x raised to n
    int num ;
    int power;
    cout<<"Enter number to whose power you want to find: "<<endl;
    cin>>num;
    cout<<"Enter number to whose you want to raise to the power of: "<<endl;
    cin>>power;
    int result = 1;
    for(int i=0; i<power; i++){
        result *= num;
    }
    cout<<"Result : "<<result<<endl;
    return 0;
}