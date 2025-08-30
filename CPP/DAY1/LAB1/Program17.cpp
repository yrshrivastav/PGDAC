#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, original, remainder, result = 0, n = 0;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    original = number;

    // Count number of digits
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Calculate sum of digits^n
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong
    if (result == original){
        cout<<original<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<original<<" is not an Armstrong number."<<endl;
    }

    return 0;
}
