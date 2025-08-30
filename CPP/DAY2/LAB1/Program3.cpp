#include<iostream>
using namespace std;

int main(){
    /*
        Find Maximum and Minimum**

        Input array and print the largest & smallest element.
.
    */
    int size, largest, smallest;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Max of numbers in array are: ";
    largest=arr[0];
    for(int i=0; i<size; i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    cout<<largest<<endl;

    cout<<"Min of numbers in array are: ";
    smallest=arr[0];
    for(int i=0; i<size; i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    cout<<smallest<<endl;
                    
                    
   return 0;
}