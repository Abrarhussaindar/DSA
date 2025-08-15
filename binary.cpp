#include <iostream>
using namespace std;

int decToBinary(int n) {
    int ans=0, pow=1;

    while(n>0){
        int rem = n % 2; // remainder --> 1 or 0
        n /= 2; // divide --> next num

        ans += (rem * pow); // (1 * 1) = 1 => ans = 1  --> if 1 then (1 * 10 = 10) => ans = 11 [1+10]
        pow *= 10; // 1 * 10 = 10 --> 10 * 10 = 100
    }
    return ans;
}

int BinaryToDec(int bi){ // 110010
    int ans=0, pow=1;
    while(bi>0){ // 110010 > 0 --> 11001 > 0 --> 1100 > 0
        int rem = bi % 10; // remainder -> to get last digit --> 110010 % 10 = 0 --> 11001 % 10 = 1 --> 1100 % 10 = 0
        ans += (rem * pow); // (0 * 1) = 0 => ans = 0; --> (1 * 2) = 2 => ans = 2; --> (0 * 4) => ans = 2;
        bi /= 10; // to remove the last digit --> 110010 / 10 = 11001 --> 11001 / 10 = 1100 --> 1100 / 10 = 110
        pow *= 2; // 1 * 2 = 2 --> 2 * 2 = 4 --> 4 * 2 = 8
    }
    return ans;  // 0 --> 2 --> 2
}

int main() {
    int n;
    cout << "Enter Binary value: ";
    cin >> n;
    // cout << decToBinary(n) << endl;
    cout << BinaryToDec(n) << endl;
    return 0;
}