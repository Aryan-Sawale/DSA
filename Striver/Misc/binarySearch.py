nums = [1, 2, 3, 4, 5, 6]
key = 6


def binSearch(nums, key):
    n = len(nums)
    start = 0
    end = n - 1
    mid = (start + end) // 2

    while start <= end:
        if key == nums[mid]:
            return mid

        if key < nums[mid]:
            end = mid - 1
            mid = (start + end) // 2

        if key > nums[mid]:
            start = mid + 1
            mid = (start + end) // 2

    return -1


print(binSearch(nums, key))
