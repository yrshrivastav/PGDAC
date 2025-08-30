#include<iostream>
using namespace std;

int main(){
    /*
        Search an Element (Linear Search)**

        Input an array and search if a number exists.
.
    */
    int size, number, present=0;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter number to search in array : ";
    cin>>number;
                    
    for(int i=0; i<size; i++){
        if(number == arr[i]){
            cout<<"Entered number is present "<<endl;
            present=1;
            break;
        }   
    }
    if(present==0){
        cout<<"Entered number is not present "<<endl;
    }
                    
                    
   return 0;
}