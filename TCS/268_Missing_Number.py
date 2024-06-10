nums = [3, 0, 1]


# contains numbers from 0 to n with 1 missing
# method 1
def missingSum(nums):
    n = len(nums)

    natSum = n * (n + 1) / 2

    arrSum = 0
    for i in range(n):
        arrSum += nums[i]

    missingNo = natSum - arrSum
    return missingNo


# method 2
def missingBit(nums):
    n = len(nums)

    allXor = 0
    for i in range(n + 1):
        allXor = allXor ^ i

    arrXor = 0
    for i in range(n):
        arrXor = arrXor ^ nums[i]

    return allXor ^ arrXor


print(missingSum(nums))
