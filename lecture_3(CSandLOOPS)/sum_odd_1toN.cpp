// SUM OF ALL ODD NUMBERS 1 TO N ------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;

    int sum = 0;
    for(int i = 0; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    cout << "Sum is: " << sum;

    return 0;
}