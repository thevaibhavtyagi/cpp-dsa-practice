// nCr BINOMIAL COEFFICIENT FOR N & R ---------------

#include <iostream>
using namespace std;

int fact(int n){
    int fac = 1;
    for(int i = 1; i <= n; i++){
        fac *= i;
    }

    return fac;
}

int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){
    int n, r;
    cout << "Enter n & r: ";
    cin >> n >> r;

    cout << nCr(n, r);

    return 0;
}