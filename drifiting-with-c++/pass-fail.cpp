// Given a number. is the student pass or fail if passing marks is 35

#include <iostream>
using namespace std;
 
int main () {
    int number1;
 
    cin >> number1;
 
    if(number1 >= 35){
        cout << "Pass";
    } else {
        cout << "Fail";
    }
}