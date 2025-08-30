#include<iostream>
using namespace std;

int main(){
    /*
        8.Second Largest Element**

        Find the second largest number without sorting.
    */

    int size, largest, secondLargest;;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    if(size<2){
        cout<<"Please enter atleast 2 as size of array"<<endl;
    }
    else{
        int arr[size]; 
        cout<<"Enter elements of array"<<endl;
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        largest = 0;
        secondLargest = 1;
        for(int i=secondLargest; i<size; i++){
            if(arr[largest]>arr[i]){
                if(arr[secondLargest]<arr[i]){
                    secondLargest=i;
                }
            }
            else if(arr[largest]==arr[i]){
                int temp=arr[largest];
                arr[largest]=arr[i];
                arr[i]=temp;
            }
            else{
                int temp = arr[largest];
                arr[largest]=arr[i];
                arr[i]=temp;
                secondLargest=i;
            }
        }
        cout<<"Second Largest : "<<arr[secondLargest]<<endl;
    }
    
    return 0;
}