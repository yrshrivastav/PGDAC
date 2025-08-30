#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //accept a character, an integer n and display the next n characters
    char character;
    int number;
    int charCode;
    cout<<"Enter a character and number n till you want to print characters "<<endl;
    cin>>character;
    cin>>number;
    charCode = character;
    cout<<"Next characters are:  "<<endl;
    for (int i = 0; i < number; i++){
        charCode++;
        printf(" %c \t", charCode);
    }
    cout<<endl;
    return 0;
}