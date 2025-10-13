// SMALLEST NUMBER IN AN ARRAY -------------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sm = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i + 1]){
            sm = arr[i + 1];
        }
    }

    cout << "Smallest number from array is: " << sm << endl;

    return 0;
}