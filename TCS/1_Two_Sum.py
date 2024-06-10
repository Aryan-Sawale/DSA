nums = [int(num) for num in input("Enter elements: ").split()]
target = int(input("Enter target"))


def twoSum(nums, target):
    umap = {}
    for i in range(len(nums)):
        umap[nums[i]] = i
    for i in range(len(nums)):
        key = target - nums[i]
        if key in umap:
            if umap[key] != i:
                return [i, umap[key]]

    return None


print(twoSum(nums, target))
