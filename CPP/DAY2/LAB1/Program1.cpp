#include<iostream>
using namespace std;

int main(){
    /*
        1. Array Input & Output**

            Take `n` elements from the user and display them.

    */

    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Elements of array : ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;

}