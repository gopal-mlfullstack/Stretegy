"""
🔁 Problem: Contains Duplicate
Given:
An integer array nums.
Task:
Return True if any value appears at least twice in the array,
and return False if every element is distinct.
🔹 Example 1
Input:
nums = [1,2,3,1]
Output:
True
Explanation:
The number 1 appears twice in the array.
🔹 Example 2
Input:
nums = [1,2,3,4]
Output:
False
Explanation:
All elements are unique.
🔹 Example 3
Input:
nums = [1,1,1,3,3,4,3,2,4,2]
Output:
True
⚙️ Constraints
1 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9

"""
def check_duplicates(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False

print(check_duplicates([1, 2, 3, 4]))




























