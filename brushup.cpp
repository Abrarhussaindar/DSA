#include <iostream>
using namespace std;

int main(){
    // video - 1 -> intro

    // video - 2
    // variables and datatypes
    int age = 24;             // 4 bytes -> 8*4 -> 32 bits
    char somthing = 'a';      // 1 byte -> 8*1 -> 8 bits
    float price = 2.6;        // 4 bytes -> 8*4 -> 32 bits
    bool isVerified = true;   // 1 byte -> 8*1 -> 8 bits || true -> 1 and false -> 0
    double newPrice = 100.89; // 8 bytes -> 8*8 -> 64 bits

    int discoutPrice = (int)newPrice; // type casting [explicit]

    // output
    cout << age << endl
        << somthing << endl
        << price << endl
        << newPrice << endl
        << discoutPrice << endl;

    // input
    int newAge;
    cin >> newAge;
    cout << "you age is: " << newAge << endl;

    // relation oprators -> true/false
    // <
    // >
    // <=
    // =>
    // ==
    // !=

    // logical oprators
    // or -> ||
    // and -> &&
    // not -> !

    // unary oprators
    // increment -> ++ -> +1 || a++ -> work then update || ++a -> update then work
    // decrement -> -- -> -1 || a-- -> work then update || --a -> update then work


    
    // video - 3
    // conditional statements

    // if-else
    int n = 10;
    if (n > 5){
        cout << "true" << endl;
    }else if(n == 10){
        cout << "equal" << endl;
    }else{
        cout << "false" << endl;
    }

    // ternaray statement
    // condition ? str1 : str2
    cout << (n>5 ? "true" : "false") << endl;


    // loops
    // while loop
    cout << "while loop" << endl;
    int num=1;
    while(num<=10){
        cout << num << endl;
        num++;
    }

    // for loop
    cout << "for loop" << endl;
    for(int i=0; i<=10; i++){
        cout << i << endl;
    }

    // do-while loop
    cout << "do-while loop" << endl;
    int nn=0;
    do{
        cout << nn << endl;
        nn++;
    }while(nn<=10);

    return 0;
}