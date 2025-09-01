#include <iostream>
using namespace std;

int main(){
    /*
        9. Frequency of Each Element**

        Count how many times each element occurs.

    */

    int size, isvisited=0, elem, count=1;
    cout<<"Enter size of array : ";
    cin>>size;
    int ar[size];
    int visited[size];
    cout<<"Enter "<<size<<" elements in array"<<endl;
    for(int i = 0; i<size; i++){
        cin>>ar[i];
        visited[i] = -1;
    }
    cout<<"Elements in array are: ";
    for(int i = 0; i<size; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<size; i++){
        if (visited[i] == 0) {
            continue;
        }
        for(int j = i+1; j<size; j++){
            if(ar[i]==ar[j]){
                count+=1;
                visited[j] = 0;
            }
            
        }
        cout<<"Element "<<ar[i]<<" count is : "<<count<<endl;
        count=1;
    }
    
    
    return 0;
}