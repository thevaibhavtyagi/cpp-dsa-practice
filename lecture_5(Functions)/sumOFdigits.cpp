// SUM OF DIGITS OF A NUMBER ----------------------

#include <iostream>
using namespace std;

int sumofdigits(int n){
    int sum = 0;
    while(n != 0){
        int temp = n % 10;
        sum += temp;
        n /= 10;
        temp++;
    }

    return sum;
}

int main(){
    int n; 
    cout << "Enter a digit: ";
    cin >> n;


    cout << sumofdigits(n);

    return 0;


}