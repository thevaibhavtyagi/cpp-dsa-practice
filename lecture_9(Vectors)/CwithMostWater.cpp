//  CONTAINER WITH MOST WATER ----------------

// Input: height = [1,8,6,2,5,4,8,3,7]
//  Output: 49

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> height(10);
    for(int i = 0; i < height.size(); i++){
        cin >> height[i];
    }
    int maxwater = 0;
    int left = 0, right = height.size() - 1;
    
    while(left < right){
        int w = right - left;
        int h = min(height[left], height[right]);

        int currwater = w * h;
        maxwater = max(currwater, maxwater);

        height[left] < height[right] ? left++ : right--;

    }
    cout << "Maxwater is: " << maxwater;

    return 0;
}