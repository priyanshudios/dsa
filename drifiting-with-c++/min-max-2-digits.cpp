// Min max of 2 digits

#include <iostream>
using namespace std;

int main () {
    int number1;
    int number2;

    cin >> number1;
    cin >> number2;

    if(number1 > number2){
        cout << "Min = " << number2 << "Max = " << number1;
    } else {
        cout << "Min = " << number1 << endl << "Max = " << number2;
    }
}