#include <iostream>
using namespace std;

int main(){
    //Display number in words
    int choice = 0;
    cout<<"-----Display number in words-----"<<endl;
    cout<<"Please enter single digit number to see it in word and enter any other number other than one digit to exit"<<endl;

    while(choice<10){
        cin>>choice;
        switch(choice){
            case 0: 
                    cout<<"Zero"<<endl;
                    break;
            case 1: 
                    cout<<"One"<<endl;
                    break;
            case 2:
                    cout<<"Two"<<endl;
                    break;
            case 3: 
                    cout<<"Three"<<endl;
                    break;
            case 4:
                    cout<<"Four"<<endl;
                    break;
            case 5: 
                    cout<<"Five"<<endl;
                    break;
            case 6:
                    cout<<"Six"<<endl;
                    break;
            case 7: 
                    cout<<"Seven"<<endl;
                    break;
            case 8:
                    cout<<"Eight"<<endl;
                    break;
            case 9: 
                    cout<<"Nine"<<endl;
                    break;
            default:
                    cout<<"Wrong choice!"<<endl;
        }
    }
    
    return 0;

}