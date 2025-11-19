#include <iostream>
#include <vector>


using namespace std;

/*
 5 . Rotate Array       *
 Problem:
 Given an array, rotate the array to the right by k steps.
 Example:
 Input: nums = [1,2,3,4,5,6,7], k = 3
 Output: [5,6,7,1,2,3,4]
 */


void reverse_array(vector<int> &nums, int start, int end){
    while (start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate_array(vector<int> &nums, int k){
    int n = nums.size();
    k = k % n;
    reverse_array(nums, 0, n - 1);
    reverse_array(nums, 0, k - 1);
    reverse_array(nums, k, n - 1);


}

int main(){

    vector<int> nums = {1, 2, 3 ,4, 5, 6, 7};
    int k = 3;
    cout << "Original Version: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    rotate_array(nums, k);
    cout << "rotated by " << k << ": ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;



    return 0;
}
