// BASIC KNOWLEDGE OF SYNTAX ------------

#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t;
    t.name = "Vaibhav";
    t.dept = "IT";
    t.subject = "SDE";
    // t.salary = 6000000;

    cout << t.name << endl;

    return 0;

}