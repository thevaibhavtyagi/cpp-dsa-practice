// DECIMAL TO BINARY CONVERSION ----------------------

#include <iostream>
using namespace std;

int main(){
    int d;
    cout << "Enter a number: ";
    cin >> d;

    int temp = d;

    int bin = 0;
    int base = 1;
    while(temp > 0){
        int re = temp % 2;
        bin += re * base;
        temp /= 2;
        base *= 10;
    }

    cout << "Binary of " << d << " is: " << bin;

    return 0;
}