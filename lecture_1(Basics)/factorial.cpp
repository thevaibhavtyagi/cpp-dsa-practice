// FACTORIAL OF N ----------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    cout << "Factoial of " << n << " is " << fact;

    return 0;
}