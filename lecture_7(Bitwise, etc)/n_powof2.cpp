// IF A NUMBER IS POWER OF 2 WITHOUT ANY LOOP -----------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 0){
        cout << "Not a power of 2." << endl;
    } else{
        if((n & (n - 1)) == 0){
            cout << "It is a power of two." << endl;
        } else{
            cout << "Not a pwer of two." << endl;
        }
    }

    return 0;

}