// MAXIMUM SUBARRAY SUM ------------------

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxsum = INT_MIN;
    for(int st = 0; st < n; st++){
        int cursum = 0;
        for(int end = st; end < n; end++){
            cursum += arr[end];
            maxsum = max(cursum, maxsum);
        }
    }

    cout << "Max subarray sum is: " << maxsum << endl;

    return 0;
}