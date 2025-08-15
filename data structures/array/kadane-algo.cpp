#include <iostream>
using namespace std;

// time complexity ---> O(n)
int main() {
    int n=5;
    int arr[n] = {1, 2, 3, 4, 5};
    int maxSum=0;
    int curSum=0;
    for(int i=0; i<n; i++){
        curSum += arr[i];
        // maxSum = max(curSum, maxSum); // takes more time
        if(curSum>maxSum) maxSum = curSum;
        if(curSum < 0) curSum = 0;
    }
    cout << "max: " << maxSum << endl;
    return 0;
}