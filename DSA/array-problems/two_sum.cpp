#include <bits/stdc++.h>

using namespace std;
/*
 ✅ 1. Two Sum    *

 Problem:
 Given an array nums and a target value, return indices of the two numbers such that they add up to the target.

 Example:
 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Reason: 2 + 7 = 9
 */




// reusable version
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++){
        int diff = target - nums[i];
        if(map.find(diff) != map.end()){
            return {map[diff], i};
        }
        map[nums[i]] = i;
    }
    return {};
}



int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> track;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++ ){
        int diff = target - nums[i];
        if (track.find(diff) != track.end()){
            result = {track[diff], i};
            break;
        }
        track[nums[i]] = i;
    }

    cout << "Indics: " << result[0] << " " << result[1] << endl;

    vector<int> result_ = twoSum(nums, 9);
    cout << "Indices: " << result_[0] << " " << result_[1] << endl;




    return 0;
}
