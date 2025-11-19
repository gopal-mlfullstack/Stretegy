#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*

4. Move Zeroes
Problem:
Given an array, move all the zeros to the end while keeping the order of non-zero elements.

Example:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
void move_zeroes(vector<int> &nums){
    int i = 0;
    for (int j = 0; j < nums.size(); j++){
        if (nums[j] != 0){
            nums[i] = nums[j];
            i++;
        }
    }

    while ( i < nums.size()){
        nums[i] = 0;
        i++;
    }

}


/// here is a cleaner version of this problem

void move_zeroes_op(vector<int> &nums) {
    int i = 0;

    for (int j = 0; j < nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[j], nums[i]);
            i++;
        }
    }

}


int main(){

    vector<int> nums = {0, 1, 0, 3, 12};
    move_zeroes_op(nums);

    cout << "Values: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
