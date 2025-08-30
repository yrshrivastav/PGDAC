#include <iostream>
using namespace std;

int main(){
    //menu driven program for pizza shop
    int choice;
    cout<<"-----Pizza Shop-----"<<endl;
    cout<<"-----Menu-----"<<endl;
    cout<<"Press 1 for Order \t Press 2 for Total Bil"<<endl;
    

    while(choice!=0){
        cin>>choice;
        switch(choice){
            case 1: 
                    cout<<"Order here"<<endl;
                    break;
            case 2:
                    cout<<"Total bill"<<endl;
                    break;
            default:
                    cout<<"Wrong choice!"<<endl;
        }
    }
    
    return 0;

}