// CHECK NUMBER IS PRIME OR NOT ---------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number N: ";
    cin >> n;

    bool isprime = true;
    int i = 2;
    do{                   // Using do-while loop.
        if(n % i == 0){
            isprime = false;
            break;
        }

        i++;

    } while(i <= (n - 1));

    if(isprime){
        cout << "Number is PRIME" << endl;
    } else{
        cout << "Number is not PRIME" << endl;
    }

    return 0;
}