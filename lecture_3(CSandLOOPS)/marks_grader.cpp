// MARKS GRADING SYSTEM ---------------

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your Marks (eg. 92): ";
    cin >> marks;

    if(marks >= 90 && marks <= 100){
        cout << "Congratulations!\nYou got an O grade." << endl;
    } else if(marks >= 80 && marks < 90){
        cout << "Congratulations!\nYou got an A+ grade." << endl;
    } else if(marks >= 70 && marks < 80){
        cout << "Congratulations!\nYou got an A grade." << endl;
    } else if(marks >= 60 && marks < 70){
        cout << "You got an B+ grade." << endl;
    } else if(marks >= 50 && marks < 60){
        cout << "You got an B grade." << endl;
    } else if(marks < 50 && marks >= 0){
        cout << "YOU FAILED !!" << endl;
    } else{
        cout << "ENTER VALID MARKS (eg: 1 to 100)" << endl;
    }

    return 0;
}