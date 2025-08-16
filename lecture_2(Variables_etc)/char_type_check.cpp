// PROGRAM TO CHECK CHARACTER TYPE ------------------

#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if(isdigit(c)){
        cout << "Digit" << endl;
    } else if(isupper(c)){
        cout << "Uppercase letter" << endl;
    } else if(islower(c)){
        cout << "Lowercase letter" << endl;
    } else{
        cout << "Speacial character" << endl;
    }
    
    return 0;

}