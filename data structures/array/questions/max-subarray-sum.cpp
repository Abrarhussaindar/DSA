#include <iostream>
using namespace std;

// time complexity ---> O(n^2)
int main() {
    int n=5;
    int arr[n] = {1, 2, 3, 4, 5};
    int maxSum=0;
    for(int start=0; start<n; start++){
        int curSum=0;
        for(int end=start; end<n; end++){
            curSum += arr[end];
            maxSum = max(curSum, maxSum);
        }
    }
    cout << "max: " << maxSum << endl;
    return 0;
}