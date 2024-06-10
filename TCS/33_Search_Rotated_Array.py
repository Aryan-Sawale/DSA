nums = [4, 5, 6, 7, 0, 1, 2]
target = 0


""" 
# while low crosses high (low <= high)
# mid = (low + high) // 2
# if (target == nums[mid]) : return mid
# 2 halves on both sides of mid
# atleast 1 side will always be sorted
# if left side sorted (arr[low] <= arr[mid]):
    if target is in left side:
      high = mid - 1
    else:
      low = mid + 1
# else (right side is sorted):
    if target is in right side:
      low = mid + 1
    else:
      high = mid - 1
"""


def searchRotatedArray(nums, target):
    low = 0
    high = len(nums) - 1
    while low <= high:
        mid = (low + high) // 2
        if target == nums[mid]:
            return mid

        if nums[low] <= nums[mid]:
            if target >= nums[low] and target <= nums[mid]:
                high = mid - 1
            else:
                low = mid + 1
        else:
            if target >= nums[mid] and target <= nums[high]:
                low = mid + 1
            else:
                high = mid - 1

    return -1


print(searchRotatedArray(nums, target))
