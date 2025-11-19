#include <iostream>
#include <vector>

using namespace std;

/*
 8 . Maximum Subarray       *
 Problem:
 Find the largest sum of any continuous subarray (Kadane’s Algorithm).
 Example:
 Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 Output: 6
 Reason: Subarray [4,-1,2,1]
 */

int max_sub_array(vector<int>& nums){
    int max_sum = nums[0];
    int cur_sum = 0;

    for (int num: nums){
        cur_sum += num;
        max_sum = max(max_sum, cur_sum);

        if (cur_sum < 0){
            cur_sum = 0;
        }
    }
    return max_sum;
}


int main(){
    vector <int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << max_sub_array(nums) << endl;


    return 0;
}
