nums = [1,2,3,4]
def containsDuplicate(nums):
    unordered_set = set(nums)
    return (len(unordered_set) != len(nums))

if (containsDuplicate(nums)):
    print("true")
else:
    print("false")