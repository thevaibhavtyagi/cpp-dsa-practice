// BASIC VECTOR QUESTION ----------

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec(5);
    cout << "Enter vector elements: ";
    for(int i = 0; i < vec.size(); i++){
        cin >> vec[i];
    }

    for(int val : vec){
        cout << val;
    }

    return 0;
}