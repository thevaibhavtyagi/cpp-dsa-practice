// PRODUCT OF ARRAY EXCEPT SELF ---------------------


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

    vector<int> result;
    for(int i = 0; i < n; i++){
        int prod = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                prod *= arr[j];
            }

        }
        result.push_back(prod);
    }

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}