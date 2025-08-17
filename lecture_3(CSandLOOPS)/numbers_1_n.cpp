// NUMBERS 1 TO N --------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while(i <= n){  // Using while loop.
        cout << i << endl;
        i++;
    }

    return 0;
}