// Add last digits of the given two numbers

#include <iostream>
using namespace std;

int main () {
    int number1;
    int number2;

    cin >> number1;
    cin >> number2;

    cout << number1%10 + number2%10;
}
