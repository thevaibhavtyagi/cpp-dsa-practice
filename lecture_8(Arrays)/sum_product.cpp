// SUM & PRODUCT OF ALL NUMBERS IN AN ARRAY -----------------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    int pro = 1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        pro *= arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << pro << endl;
}