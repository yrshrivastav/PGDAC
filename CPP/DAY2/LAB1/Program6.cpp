#include <iostream>
using namespace std;

int main(){
    /*
        6. Count Even and Odd Numbers**

        Count how many even and odd numbers are in the array.
    */
    int size, evenNo=0, oddNo=0;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            evenNo++;
        }
        else{
            oddNo++;
        }
    }
    cout<<"Total even numbers in array : "<<evenNo<<endl;
    cout<<"Total odd numbers in array : "<<oddNo<<endl;
    return 0;
}