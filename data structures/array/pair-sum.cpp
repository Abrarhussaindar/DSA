#include <iostream>
#include <vector>
using namespace std;

// brute force approce
vector<int> pairSumBrute(vector<int>nums, int target){
    vector<int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    for(int val:ans){
        cout << "value: " << val << endl;
    }
    return ans;
}


// optimal solution but only works for sorted arrays
vector<int> pairSumOptimal(vector<int>nums, int target){
    // vector<int> ans;
    // int start=0, end=nums.size()-1;
    // while(start < end){
    //     if(nums[start] + nums[end] == target){
    //         ans.push_back(nums[start]);
    //         ans.push_back(nums[end]);
    //         return ans;
    //     }

    //     if(nums[start] + nums[end] > target) end--;
    //     if(nums[start] + nums[end] > target) start++;
    // }
    // return ans;

    vector<int> ans;
    int start=0, end=nums.size()-1;
    while(start < end){
        int pSum=nums[start] + nums[end];
        if(pSum > target) {
            end--;
        }else if(pSum < target){
            start++;
        } else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        } 
    }
    return ans;
}

int main() {       // 0 1 2
    vector<int> nums={3,2,4};
    int target=6;
    vector<int> ans = pairSumOptimal(nums, target);
    cout << "value: " << ans[0] << ans[1] << endl;
    return 0;
}