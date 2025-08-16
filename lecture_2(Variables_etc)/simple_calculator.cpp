// SIMPLE CALCULATOR ------------

#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter two numbers a & b: ";
    cin >> a >> b;

    char o;
    cout << "Enter operator ex(+, -, *, /): ";
    cin >> o;

    if(o == '+'){
        cout << "Sum of A and B is: " << a + b << endl;
    } else if(o == '-'){
        cout << "Difference of A and B is: " << a - b << endl;
    } else if(o == '*'){
        cout << "Multiplication of A and B is: " << a * b << endl;
    } else if(o == '/'){
        if(b == 0){
            cout << "B can't be zero" << endl;
        } else{
            cout << "Division of A and B is: " << double(a) / b << endl;
        }
    } else{
        cout << "Please select Valid operator" << endl;
    }

    return 0;
}