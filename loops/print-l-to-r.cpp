// You are given two integers 𝐿 and 𝑅. Print all integers from 𝐿 to 𝑅 in increasing order

#include <iostream>
using namespace std;

int main () {
    int l;
    int r;
    cin >> l >> r;
    while (l <= r) {
        cout << l << " ";
        l++;
    }
}