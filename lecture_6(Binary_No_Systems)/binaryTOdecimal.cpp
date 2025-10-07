// BINARY TO DECIMAL CONVERSION -------------------

#include <iostream>
using namespace std;

int main(){
    int b;
    cout << "Enter binary form: ";
    cin >> b;

    int temp = b;
    int base = 1; 
    int dec = 0;

    while(temp > 0){
        int re = temp % 10;
        dec += re * base;
        temp /= 10;
        base *= 2;
    }

    cout << dec;

    return 0;
}