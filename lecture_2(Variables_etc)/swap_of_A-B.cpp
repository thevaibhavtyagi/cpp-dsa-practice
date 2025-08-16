// SWAP TWO NUMBERS --------------

#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    // // without third variable
    // a = a + b; // 5 + 2 = 7
    // b = a - b;  // 7 - 2 = 5
    // a = a - b; // 7 - 5 = 2

    // cout << "a = " << a << " b = " << b;

    // with third variable
    int c = a + b;
    b = c - b;
    a = c - a;

    cout << "a = " << a << " b = " << b;

    return 0;
}