#include<iostream>
using namespace std;

int main(){
    /*
        10. Merge Two Arrays**

        Take two arrays and merge them into a third array.
    */

    int sizeOfArrayOne, sizeOfArrayTwo;
    cout<<"Enter size of array 1"<<endl;
    cin>>sizeOfArrayOne;
    int ar1[sizeOfArrayOne]; 
    cout<<"Enter elements of array one"<<endl;
    for(int i=0; i<sizeOfArrayOne; i++){
        cin>>ar1[i];
    }

    cout<<"Array one elements are: ";
    for(int i=0; i<sizeOfArrayOne; i++){
        cout<<" "<<ar1[i];
    }
    cout<<endl;

    cout<<"Enter size of array 2"<<endl;
    cin>>sizeOfArrayTwo;
    int ar2[sizeOfArrayTwo]; 
    cout<<"Enter elements of array two"<<endl;
    for(int i=0; i<sizeOfArrayTwo; i++){
        cin>>ar2[i];
    }
    cout<<"Array two elements are: ";
    for(int i=0; i<sizeOfArrayTwo; i++){
        cout<<" "<<ar2[i];
    }
    cout<<endl;

    //merging of array one and two
    int mergedArray = sizeOfArrayOne + sizeOfArrayTwo;
    int ar3[mergedArray];
    int j=0,k=0;
    for(int i=0; i<mergedArray; i++){
        if(i<sizeOfArrayOne){
            ar3[i]=ar1[j];
            j++;
        }
        else{
            ar3[i]=ar2[k];
            k++;
        }
    }
    
    cout<<"Merged array one and two are: ";
    for(int i=0; i<mergedArray; i++){
        cout<<" "<<ar3[i];
    }
    cout<<endl;
    return 0;
}