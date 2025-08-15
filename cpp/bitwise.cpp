#include <iostream>
using namespace std;

int main() {
    int a=4, b=5;

    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;
    return 0;
}



/*
    bitwise & (and)
        0 & 0 --> 0
        0 & 1 --> 0
        1 & 0 --> 0
        1 & 1 --> 1


    bitwise | (or)
        0 | 0 --> 0
        0 | 1 --> 1
        1 | 0 --> 1
        1 | 1 --> 1


    bitwise ^ (xor)
        0 | 0 --> 0
        0 | 1 --> 1
        1 | 0 --> 1
        1 | 1 --> 0


XOR oprator:
    n ^ n => 0
    n ^ 0 => n 
*/