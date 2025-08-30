#include <iostream>
using namespace std;

int main(){
    //find m to the power n
    int m;
    int n;
    cout<<"Enter the value m: "<<endl;
    cin>>m;
    cout<<"Enter the value n: "<<endl;
    cin>>n;

    int result = 1;
    for(int i = 0; i < n; i++){
        result *= m;
    }

    cout<<m<<" to the power "<<n<<" is "<<result<<endl;

    return 0;
}