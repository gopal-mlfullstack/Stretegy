#include <iostream>
#include <vector>
using namespace std;

/*

3. Remove Duplicates From Sorted Array
Problem:
Given a sorted array, remove duplicates in-place and return the number of unique elements.
Example:
Input: nums = [1,1,2]
Output: 2
Array becomes: [1,2,_]
*/

int remove_duplicates(vector<int> &nums){
    if (nums.empty()) return 0;

    int i = 0;

    for (int j = 1; j < nums.size(); j++){
        if ( nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}







int main(){
    vector<int> nums = {1, 2, 2, 3, 3, 4, 5, 6, 7, 7};

    int result = remove_duplicates(nums);
    cout << "Result: " << result << endl;

    // printing values in this array
    cout << "Array after removing duplicates: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;


    return 0;
}
