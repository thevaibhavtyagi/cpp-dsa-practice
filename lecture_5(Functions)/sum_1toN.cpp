// SUM OF NUMBERS FROM 1 TO N -----------------

#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum is " << sum(n) << endl;

    return 0;

}