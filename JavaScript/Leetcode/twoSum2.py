def twoSum2(nums, target):
    left, right = 0, len(nums) - 1

    while (left < right):
        curSum = nums[left] + nums[right]
        if curSum > target:
            right -= 1
        elif curSum < target:
            left += 1
        else:
            return [left + 1, right + 1]

print(twoSum2([1, 3, 5, 9, 11], 12))
