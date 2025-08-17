// CHECK CHARACTER IS LOWERCASE OR UPPERCASE -------------

#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;

    // //Without built in function
    // if(c >= 'a' && c <= 'z'){
    //     cout << "LOWER CASE";
    // } else if(c >= 'A' && c <= 'Z'){
    //     cout << "UPPER CASE";
    // } else{
    //     cout << "Enter only alphabets!!!";
    // }

    //Using built in function
    if(islower(c)){
        cout << "LOWER CASE";
    } else if(isupper(c)){
        cout << "UPPER CASE";
    } else{
        cout << "Enter only alphabets!!!";
    }

    return 0;
}