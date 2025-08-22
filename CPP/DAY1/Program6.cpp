#include <iostream>
using namespace std;

int main(){
    //Calculate tax based on basic salary
    int salary;
    float taxAmount;
    cout<<"Enter your annual basic salary"<<endl;
    cin>>salary;
    if(salary<150000){
        //<150000 then 0% tax
        cout<<"Tax on your salary is Zero(0)"<<endl;
    }
    else if(salary>=150000 && salary<=300000){
        //>150000 and <300000 then 20% tax
        taxAmount = salary * 0.2f;
        cout<<"Tax on your salary is "<<taxAmount<<endl;
    }
    else if(salary>300000){
        //>300000 then 30% tax
        taxAmount = salary * 0.3f;
        cout<<"Tax on your salary is "<<taxAmount<<endl;
    }
    else{
        cout<<"Please enter a positive value "<<endl;
    }

    return 0;
}