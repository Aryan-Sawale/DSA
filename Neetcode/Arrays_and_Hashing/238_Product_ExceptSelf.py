nums = [-1,1,0,-3,3]

def productExceptSelf(nums):
    size = len(nums)
    results = [1]*size
    
    prefix = 1
    for i in range(size):
        results[i] = prefix
        prefix *= nums[i]

    postfix = 1
    for i in range(size - 1, -1, -1):
        results[i] *= postfix
        postfix *= nums[i]

    return results

print(productExceptSelf(nums))