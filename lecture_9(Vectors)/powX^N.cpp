// POW (X, N) ---------------------

#include <iostream>
using namespace std;

int main(){
    double x;
    cout << "Enter n: ";
    cin >> x;

    int pw;
    cout << "Enter power: ";
    cin >> pw;

    long binform = pw;
    if(binform < 0){
        x = 1/x;
        binform = -binform;
    }

    double ans = 1;
    while(binform > 0){
        if(binform % 2 == 1){
            ans *= x;
        }

        x *= x;
        binform /= 2;
    }

    cout << ans;

    return 0;

}