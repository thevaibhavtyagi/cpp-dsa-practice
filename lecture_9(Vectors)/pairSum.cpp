// PAIR SUM ------------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array length: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter target: ";
    cin >> x;

    bool issum = false;
    for(int i = 0; i < n; i++){
        if(arr[i] + arr[i + 1] == x){
            cout << "[" << arr[i] << "," << arr[i + 1] << "]" << endl;
            issum = true;
            break;
        } 
    }

    if(issum == false){
        cout << "No sum is present." << endl;
    }

    return 0;
}