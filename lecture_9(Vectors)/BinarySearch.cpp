// BINARY SEARCH -----------------

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

      int t;
    cin >> t;

    int left = 0, right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == t){
            cout << mid;
            return 0;
        } else if(arr[mid] < t){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return -1;

}