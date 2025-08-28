#include <iostream>
using namespace std;

int main(){
    //which accepts two integers and an operator as a character (+ - * / ), performs the corresponding operation
    int choice;

    cout<<"-----Arithmetic operation-----"<<endl;
    cout<<"-----Menu-----"<<endl;
    cout<<"Please enter 1 to continue and 0 to exit"<<endl;
    

    while(choice!=0){
        cin>>choice;
        int number1;
        int number2;
        char operation;
        int result;
        cout<<"Please enter first number : "<<endl;
        cin>>number1;
        cout<<"Please enter second number : "<<endl;
        cin>>number2;
        cout<<"Please enter operation to be performed on these numbers : "<<endl;
        cin>>operation;
        switch(operation){
            case '+': 
                    result = number1+number2;
                    cout<<"Sum : "<<result<<endl;
                    break;
            case '-':
                    result = number1-number2;
                    cout<<"Difference : "<<result<<endl;
                    break;
            case '*': 
                    result = number1*number2;
                    cout<<"Product : "<<result<<endl;
                    break;
            case '/':
                    result = number1/number2;
                    cout<<"Division : "<<result<<endl;
                    break;
            default:
                    cout<<"Wrong operation choosen!"<<endl;
        }
    }
    
    return 0;

}