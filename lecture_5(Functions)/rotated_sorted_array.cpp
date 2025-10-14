// FINDING TARGET IN ROTATED SORTED ARRAY ----------------

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter n; ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int st = 0, end = n - 1;
    while(st <= end){
        int mid = st + (end  - st) / 2;

        if(nums[mid] == target){
            cout << "Found at : " << mid << endl;
            return 0;
        }

        if(nums[st] <= nums[mid]){
            if(nums[st] <= target && target <= nums[mid]){
                end = mid - 1;
            } else{
                st = mid + 1;
            }
        } else{
            if(nums[mid] <= target && target <= nums[end]){
                st = mid - 1;
            } else{
                end = mid + 1;
            }
        }
    }

    return -1;

}