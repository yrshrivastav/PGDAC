#include <iostream>
using namespace std;

int main(){
    //Given angles of triangle and check for whether it is valid or not
    int angle1;
    int angle2;
    int angle3;

    cout<<"Enter all three angles of triangle"<<endl;
    cin>>angle1>>angle2>>angle3;
    if(angle1>0 && angle2>0 && angle3>0){
        if((angle1+angle2+angle3)==180){
            cout<<"Triangle is valid"<<endl;
        }
        else{
            cout<<"Triangle is not valid"<<endl;
        }
    }
    else{
        cout<<"Please enter angle greater than 0"<<endl;
    }

    return 0;
    
}