// Min max of 3 digits

#include <iostream>
using namespace std;

int main () {
    int number1;
    int number2;
    int number3;

    cin >> number1 >> number2 >> number3;
    
    cout << "Min = " << min(number1, min(number2, number3)) << endl << "Max = " << max(number1, max(number2, number3));
}