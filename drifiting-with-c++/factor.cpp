// Given two numbers print yes and no if it's a factor or not

#include <iostream>
using namespace std;

int main () {
    int number1;
    int number2;

    cin >> number1;
    cin >> number2;

    if(number1 % number2 == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }
}