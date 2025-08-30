#include <iostream>
using namespace std;

int main(){
    //Check for vowel and consonant
    char character;
    cout<<"Enter lowercase character to check for vowel or consonant"<<endl;
    cin>>character;
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u')
    {
        cout<<"Entered character '"<<character<<"' is vowel"<<endl;
    }
    else{
        cout<<"Entered character '"<<character<<"' is consonant"<<endl;
    }
    
    return 0;
}