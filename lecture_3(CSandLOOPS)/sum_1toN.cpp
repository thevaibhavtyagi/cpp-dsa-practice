// SUM OF NUMBERS 1 TO N ---------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number N: ";
    cin >> n;

    int sum = 0;
    for(int i = 0; i <= n; i++){   // using for loop
        sum += i;
    }

    cout << "Sum is :" << sum;

    return 0;
}