// CHECK EVEN OR ODD --------------

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << num << " is EVEN";
    } else{
        cout << num << " is ODD";
    }

    return 0;
}