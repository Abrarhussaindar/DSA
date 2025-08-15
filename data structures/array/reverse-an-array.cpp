#include <iostream>
using namespace std;

int reverseArray(int arr[], int arrSize) {
    int start=0, end=arrSize-1;
    if(start == end) return 0;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main() {
    int arrSize;
    cout << "Enter array size: " << endl;
    cin >> arrSize;
    int arr[arrSize];

    
    cout << "Enter array elements: " << endl;
    for(int i=0; i<arrSize; i++){
        cin >> arr[i];
    }

    cout << "Before Reverse :" << endl;
    for(int i=0; i<arrSize; i++){
        cout << arr[i];
    }
    cout << endl;
    
    int ans = reverseArray(arr, arrSize);

    cout << "After Reverse :" << endl;
    for(int i=0; i<arrSize; i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}