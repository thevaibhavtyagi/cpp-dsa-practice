// INDEX IN MOUNTAIN ARRAY -------------

// Input = [0, 3, 8, 9, 5, 2]
// Output = 3;

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int st = 1, end = nums.size() - 2;
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]){
            cout << "Peak Element is at index: " << mid;
            return 0;
        }

        if(nums[mid - 1] < nums[mid]){
            st = mid + 1;
        } else{
            end = mid - 1;
        }
    }

    return -1;
}