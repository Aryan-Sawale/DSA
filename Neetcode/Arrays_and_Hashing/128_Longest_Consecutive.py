nums = [0,3,7,2,5,8,4,6,0,1]

def longestConsecutive(nums):
    if (len(nums) == 0):
        return 0
    
    uset = set(nums)
    max_len = 1
    
    for num in uset:
        if ((num - 1) not in uset):
            length = 1
            start = num
            while ((start + 1) in uset):
                length += 1
                max_len = max(max_len, length)
                start += 1
    
    return max_len

print(longestConsecutive(nums))