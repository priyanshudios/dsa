// If given two number N & M. Is M a multiple of N

#include <iostream>
using namespace std;

int main () {
    int number1;
    int number2;

    cin >> number1;
    cin >> number2;

    if(number2 % number1 == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }
}