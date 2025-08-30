#include<iostream>
using namespace std;

int main(){

    /*
        Write a program to create an array of integers and perform following operations on that array like 
        finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
        array from user
    */
    cout<<"1: Sum of numbers in array 2: Average of numbers in array 3: Max of numbers in array 4: Minimum of number in arry 0: Exit the application"<<endl;
    int choice, size, largest, smallest, sum=0;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    while(choice!=0){
        
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1: 
                    cout<<"Sum of numbers in array are: ";
                    
                    for(int i=0; i<size; i++){
                        sum += arr[i];
                    }
                    cout<<sum<<endl;
                    break;
            case 2: 
                    cout<<"Average of numbers in array are: ";
                    for(int i=0; i<size; i++){
                        sum += arr[i];
                    }
                    cout<<sum/size<<endl;
                    break;
            case 3: 
                    cout<<"Max of numbers in array are: ";
                    largest=arr[0];
                    for(int i=0; i<size; i++){
                        if(largest<arr[i]){
                            largest = arr[i];
                        }
                    }
                    cout<<largest<<endl;
                    break;
            case 4: 
                    cout<<"Min of numbers in array are: ";
                    smallest=arr[0];
                    for(int i=0; i<size; i++){
                        if(smallest>arr[i]){
                            smallest = arr[i];
                        }
                    }
                    cout<<smallest<<endl;
                    break;
            default:
                    cout<<"Invalid operation choice"<<endl;
        }
    }

    cout<<"Elements of array : ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}