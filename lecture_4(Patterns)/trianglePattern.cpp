// TRIANGLE PATTERN ------------------

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i + 1; j++){
            cout << "*" << " ";
        }
        cout << endl;
        
    }


    // // Reverse triangle
    // for(int i = 1; i <= n; i++){
    //     for(int j = i; j <= n; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }


    // // Continues digit triangle
    // int num = 1;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j < i + 1; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    // // Another Triangle pattern with digit
    // for(int i = 1; i <= n; i++){
    //     int num = 1;
    //     for(int j = 1; j < i + 1; j++){
    //         cout << num << " ";
    //         num++;
    //     }
        
    //     cout << endl;
        
    // }



    return 0;
}