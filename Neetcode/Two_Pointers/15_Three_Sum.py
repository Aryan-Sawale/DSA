nums = [1,2,-2,-1]

def threeSum(nums):
    nums.sort()
    result = []
    size = len(nums)
    for i in range (size):
        # deal with duplicate elements which would lead to duplicate triplets
        if (i != 0 and nums[i] == nums[i-1]):
            continue

        twosum = 0 - nums[i]
        left, right = i + 1, size - 1
        while (left < right):
            sum = nums[left] + nums[right]
            if (sum > twosum):
                right -= 1
            if (sum < twosum):
                left += 1
            if (sum == twosum):
                result.append([nums[i], nums[left], nums[right]])
                while (left < right and nums[right - 1] == nums[right]):
                    right -= 1
                right -= 1

    return result        

print(threeSum(nums))