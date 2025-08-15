#include <bits/stdc++.h>
using namespace std;

// brute force approch
// time complexity ---> O(n^2)
int majorityElementBrute(vector<int>nums){
    int times = nums.size()/2; // 3/2 --> 1.5 -> 1
    for(int i=0; i<nums.size();i++){
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i] == nums[j]) {
                count++;
            }
        }
        if(count > times) return nums[i];
        
    }
    return 0;

}

// time complexity ---> O(nlogn)
int majorityElementOptimal(vector<int>nums){
    int times = nums.size()/2; 
    sort(nums.begin(), nums.end()); //to sort the array first
    int count=1, ans=nums[0];

    for(int i=1; i<nums.size();i++){
            if(nums[i] == nums[i-1]) {
                count++;
            }else{
                count=1;
                ans=nums[i];
            }
        if(count > times) return nums[i];
        
    }
    return ans;

}

// time complexity ---> O(n)
int mooresVotingAlo(vector<int>nums){
    int count=0, ans=nums[0];

    for(int i=0; i<nums.size();i++){
        if(count == 0) ans = nums[i];

        if(ans == nums[i]) {
            count++;
        }else{
            count--;
        }
        
    }
    return ans;

}

int main() {
    vector<int> nums={2,2,3,3,3,3,2};
    int ans = mooresVotingAlo(nums);
    cout << "value: " << ans << endl;
    return 0;
}



/*

majority of element means the frequeny of the element in the array i:e how many time a single element appers in the array

which is equal to n/2 [floor division]

*/