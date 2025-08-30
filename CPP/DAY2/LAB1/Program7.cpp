#include<iostream>
using namespace std;

int main(){
    /*
        7. Sort Array (Ascending & Descending)**

        Implement a simple bubble sort.
    */

    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    //Simple bubble sort
    //Ascending order
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"Sorted elements of array in ascending order : ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

    //Simple bubble sort
    //Descending order
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"Sorted elements of array in descending order : ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}