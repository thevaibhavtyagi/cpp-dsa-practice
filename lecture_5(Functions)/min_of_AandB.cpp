// MINIMUM OF TWWO NUMBERS -----------------

#include <iostream>
using namespace std;

int minoftwo(int a, int b){
    int min;
    if(a < b){
        return min = a;
    } else{
        return min = b;
    }

    return min;
}

int main(){
    cout << "Minimum among both is " << minoftwo(5, 8);

    return 0;
}