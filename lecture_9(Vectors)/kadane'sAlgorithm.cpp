// KADANE'S ALGORITHM TO FIND MAXIMUM SUBARRAY SUM --------------

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
           cin >> arr[i];
    }

    int currsum = 0, maxsum = INT_MIN;
    for(int val : arr){
        currsum += val;
        maxsum = max(currsum, maxsum);

        if(currsum < 0){
            currsum = 0;
        }
    }

    cout << "Maximum array sum: " << maxsum << endl;

    return 0;
}
