#include<iostream>
using namespace std;

int main(){
    /*
        Sum & Average of Array**

        Input marks of `n` students, find total & average.
    */
    int size, sum=0;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Sum of marks of "<<size<<" Students in array are: ";                
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout<<sum<<endl;

    cout<<"Average of marks of "<<size<<" Students in array are: ";
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout<<sum/size<<endl;
                    
                    
   return 0;
}