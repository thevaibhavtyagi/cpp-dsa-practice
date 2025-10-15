// SUBARRAY SUM EQUALS K ----------------

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];
        

        if(sum == k){
            count++;
        }
    }
    }

    cout << "Total subaarays whose sum == k: " << count << endl;

    return 0;
}