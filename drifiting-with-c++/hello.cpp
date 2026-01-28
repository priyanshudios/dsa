#include <iostream> // header file which is helping us to use cout
using namespace std; // helping us to emint std before every 

int main () {
    int balance = 999999999; // whole numbers
    float poor = 9.99999999; // decimal
    double rich = 99999999.9; // decimal
    char character = "p"; // single character
    bool legal = true; // boolean
    cout << "Hello" << endl;
    cout << balance << endl;
    cout << 20 + 3 << endl;
    cout << 20 - 3 << endl;
    cout << 20 * 3 << endl;
    cin.get();
    return 0;
}

// Rules:
// variables must be declared before use
// no spaces in variable name
// case sensitive matters - different case will lead to different variables
// Keep meaningful names like any sane person would do