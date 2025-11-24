#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
    ////////////--- EASY ---\\\\\\\\\\\\\\\\\///
    //--- problem 01: Sum of Array: Given array of n integers, find sum (focus on time complexity)
    // int sum = 0;
    // array<int, 7> nums = {1, 2, 3, 4, 5, 6, 7};
    //
    // for (int i = 0; i < nums.size(); i++){
    //     sum += nums[i];
    // }
    //
    // cout << "Array Elements: ";
    // for (int num: nums){
    //     cout << num << " ";
    // }
    // cout << endl;
    //
    // cout << "Sum is: " << sum << endl;
    // // the time complexity of this program is O(n) cause its iterate over the length of the array in order to find the sum of each elements.

    /////------ problem 02: Find largest element in array
    // array<int, 7> nums = {23, 65, 1, 2, 7, 6, 99};
    // int max = nums[0];
    //
    // for (int i = 1; i < nums.size(); i++) {
    //
    //     if (nums[i] > max) max = nums[i];
    //
    // }
    // cout << "Array Elements: ";
    // for (int num: nums){
    //     cout << num << " ";
    // }
    // cout << endl;
    //
    // cout << "Largest Element: " << max << endl;

    vector<int> nums = {1, 2, 5, 7, 9, 10};

    cout << "Original Values: ";
    for (int num: nums) {
        cout << num << " ";
    }
    cout << endl;

    int start = 0, end = nums.size() - 1;

    while (start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;

    }
    cout << "Reversed: ";
    for (int num: nums) {
        cout << num << " ";
    }
    cout << endl;







    return 0;
}
