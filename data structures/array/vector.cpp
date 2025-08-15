#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    vector<int> newArr = {0, 1, 2, 3};
    vector<int> vec(5, 0);  

    // for each loop
    for(int val:vec){
        cout << val << endl;
    }

    // functions of vector
    // size of vector
    cout << arr.size() << endl;

    // push back
    arr.push_back(1); // adds an element at the end of vector
    
    // pop back
    arr.pop_back(); // returns and removes the last element of vector
    
    // front
    arr.front(); // returns the first element of vector

    // back
    arr.back(); // returns the last element of vector

    // at
    arr.at(0); // returns the value at particular index

    return 0;
}



// side notes
/*
    two type of memories ---> static and dynamic

    static memory allocation ----> memory allaction at compile time || [this is gets stored in stack memory]
    dynamic memory allocation ----> memory allocation at runtime // while program is running... || [this gets stored in heap memory]
*/