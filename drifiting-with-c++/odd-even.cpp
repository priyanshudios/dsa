// Find if a number is odd or even

#include <iostream>
using namespace std;

int main () {
    int number1;

    cin >> number1;

    if(number1 % 2 == 0){
        cout << "Even";
    } else {
        cout << "Odd";
    }
}