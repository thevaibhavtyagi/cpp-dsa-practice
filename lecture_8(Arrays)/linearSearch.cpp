// LINEAR SEARCH TO FIND AN SPECIFIC ELEMENT --------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter X to find: ";
    cin >> x;

    bool found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << "It is at position: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Element not found." << endl;
    }

    return 0;
}