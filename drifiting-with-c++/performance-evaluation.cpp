// Student's performance evaluation

#include <iostream>
using namespace std;

int main () {
    int number1;

    cin >> number1;
    
    if(number1 > 90) {
        cout << "Excellent";
    } else if (number1 > 80 && number1 <= 90) {
        cout << "Good";
    } else if (number1 > 70 && number1 <= 80) {
        cout << "Fair";
    } else if (number1 > 60 && number1 <= 70) {
        cout << "Meets Expectations";
    } else if (number1 < 60) {
        cout << "Below Par";
    }
}