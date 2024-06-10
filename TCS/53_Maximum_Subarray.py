import sys

nums = [-2, -1]


# brute force
# O(n^3)
def MaxSubarray(nums):
    maxSum = -sys.maxsize - 1  # INT_MIN
    for i in range(len(nums)):
        for j in range(i, len(nums)):
            ptr = i
            sum = 0
            for k in range(j - i + 1):
                sum += nums[ptr]
                ptr += 1
            maxSum = max(maxSum, sum)

    return maxSum


# better
# O(n^2)
def MaxSubarray2(nums):
    maxSum = -sys.maxsize - 1  # INT_MIN
    for i in range(len(nums)):
        sum = 0
        for j in range(i, len(nums)):
            sum += nums[j]
            maxSum = max(maxSum, sum)

    return maxSum


# optimal o(n)
# Intuition: we don't want to carry forward a negative sum of the current subarray
# If negative is found, we reset the starting position of subarray to the next position (by setting sum to 0)
def MaxSubarray3(nums):
    maxSum = -sys.maxsize - 1
    sum = 0

    for i in range(len(nums)):
        sum += nums[i]
        maxSum = max(maxSum, sum)

        if sum < 0:
            sum = 0


# With index tracking
def MaxSubarray4(nums):
    maxSum = -sys.maxsize - 1
    sum = 0
    startInd = 0
    endInd = 0
    for i in range(len(nums)):
        if sum == 0:
            startInd = i  # new subarray will always start when sum has been reset to 0

        sum += nums[i]

        if sum > maxSum:
            maxSum = sum
            endInd = i  # When current sum is max, the end index will be current index

        if sum < 0:
            sum = 0


print(MaxSubarray2(nums))
