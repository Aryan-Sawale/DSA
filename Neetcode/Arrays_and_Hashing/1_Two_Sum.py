nums, target = [2,7,11,15], 9
def twoSum(nums, target):
    dict = {}
    for i in range(len(nums)):
        required = target - nums[i]
        if required in dict:
            return [dict[required], i]
        dict[nums[i]] = i
    return []

print(twoSum(nums, target))