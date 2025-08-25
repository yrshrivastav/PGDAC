#include <iostream>
using namespace std;

int main(){
    
    //find greatest of three numbers
    int a, b, c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Greatest number among all three is: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"Greatest number among all three is: "<<b<<endl;
    }
    else{
        cout<<"Greatest number among all three is: "<<c<<endl;
    }

    return 0;
}