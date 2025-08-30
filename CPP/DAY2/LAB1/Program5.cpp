#include<iostream>
using namespace std;

int main(){
    /*
        5. Reverse Array**

        Reverse an array and display the result.

    */

    int size, start, end;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    start = 0;
    end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    cout<<"Reversed elements of array are : ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}