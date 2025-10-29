"""
Remove Duplicates from Sorted Array (#26)

Problem: Remove duplicates in-place from a sorted array and return the new length.
Example:
Input: [1,1,2] → Output: 2, array becomes [1,2,_]
"""
def get_new_length(nums):
    if not nums:
        return 0

    i = 0
    for j in range(1, len(nums)):
        if nums[j] != nums[i]:
            i += 1
            nums[i] = nums[j]
    return i + 1


print(get_new_length([1, 1, 2, 3, 4, 5]))

