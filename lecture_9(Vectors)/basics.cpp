// // BASICS OF VECTORS ---------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<char> vec = {'a', 'b', 'c', 'd'};

//     cout << "size = " << vec.size() << endl;   // size function --- 

//     for(char val : vec){
//         cout << val << endl;
//     }

//     return 0;
// }



// TESTING SIZE AND CAPACITY FUNCTION -----------


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}
