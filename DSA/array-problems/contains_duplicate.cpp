#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
 Contains Duplicate
 Problem:
 Given an array, return true if any number appears more than once.
 Example:
 Input: nums = [1,2,3,1]
 Output: true
 */

bool contains_duplicates(vector<int>& nums){
    if (nums.empty()) return 0;
    unordered_set<int> seen;

    for (int num: nums){
        if (seen.count(num)){
            return true;
        }
        seen.insert(num);
    }
    return false;

}



int main(){
    vector<int> nums = {1, 2, 3, 1};
    if(contains_duplicates(nums)){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }

    return 0;
}
