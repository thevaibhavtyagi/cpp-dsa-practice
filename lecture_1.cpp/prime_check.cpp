// CHECK PRIME OR NOT -----------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isprime = true;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }

    if(isprime == true){
        cout << n << " is PRIME";
    } else{
        cout << n << " not PRIME";
    }

    return 0;
}