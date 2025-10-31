"""
Input [1, 2, 3]
Output [1, 2, 4]
"""

def plus_one(digit):
    for i in range(len(digit)-1, -1, -1):
        if digit[i] < 9:
            digit[i] += 1
            return digit
        else:
            digit[i] = 0
    return [1] + digit
print(plus_one([1, 2, 3]))
print(plus_one([1, 2, 9]))
