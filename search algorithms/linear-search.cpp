#include <iostream>
using namespace std;

// time complexity --> O(n)
int linearSearch(int arr[], int arrSize, int target){

    for(int i=0; i<arrSize; i++){
        if(arr[i] == target){            
            return i;
        } 
    }

    return -1;
}

int main() {
    int arrSize;
    int arr[arrSize];
    int target;

    cout << "Enter array size: " << endl;
    cin >> arrSize;
    
    cout << "Enter array elements: " << endl;
    for(int i=0; i<arrSize; i++){
        cin >> arr[i];
    }

    cout << "Enter target element to find: " << endl;
    cin >> target;
    
    int ans = linearSearch(arr, arrSize, target);
    if(ans > 0) cout << "target element " << target << " found at position: " << ans+1 << endl;
    else cout << "target element " << target << " not found in the array" << endl;

    return 0;
}