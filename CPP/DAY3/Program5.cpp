#include<iostream>
using namespace std;

int main(){

    /*
        Write a program to accept array  from user .Accept number from user and 
        search number is present in array or not
    */
    cout<<"1: Search for number in array 0: Exit the application"<<endl;
    int choice, size, number, present=0;
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
                    break;
            
            default:
                    cout<<"Invalid operation choice"<<endl;
        }
    }

    return 0;
}