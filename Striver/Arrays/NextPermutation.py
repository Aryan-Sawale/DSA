arr = [1, 3, 2]
# arr = [1, 3, 2, 5, 4, 7]


# my sol
# O(nlogn) O(n)
def nextPerm(arr):
    rightMax = [0] * len(arr)
    rightMax[len(arr) - 1] = arr[len(arr) - 1]
    for i in range(len(arr) - 2, -1, -1):
        rightMax[i] = max(arr[i + 1], rightMax[i + 1])

    maxSwappableIndex = -1
    for i in range(len(arr)):
        if arr[i] >= rightMax[i]:
            continue
        else:
            maxSwappableIndex = i

    # map of values to index
    umap = {}
    for i in range(len(arr)):
        umap[arr[i]] = i

    if maxSwappableIndex == -1:
        arr.sort()
        return arr

    # remaining array to the right of maxSwappableIndex
    remArr = arr[maxSwappableIndex + 1 : len(arr)]
    remArr.sort()

    # find minimum number which can be swapped (greater than current)
    minNum = remArr[0]
    for i in range(len(remArr)):
        if remArr[i] > arr[maxSwappableIndex]:
            minNum = remArr[i]
            break

    minSwapIndex = umap[minNum]
    print(minSwapIndex)

    # swap minimum swappable number
    arr[maxSwappableIndex], arr[minSwapIndex] = (
        arr[minSwapIndex],
        arr[maxSwappableIndex],
    )

    # sort the remaining array (dry run to understand)
    remSorted = arr[0 : maxSwappableIndex + 1] + sorted(
        arr[maxSwappableIndex + 1 : len(arr)]
    )

    return remSorted


# print(nextPerm(arr))

# https://takeuforward.org/data-structure/next_permutation-find-next-lexicographically-greater-permutation/
"""
Time and space comp can be reduced by observing that elements to the right of the maxswappable element will always be in decreasing order


from typing import List

def nextGreaterPermutation(A: List[int]) -> List[int]:
    n = len(A) # size of the array.

    # Step 1: Find the break point:
    ind = -1 # break point
    for i in range(n-2, -1, -1):
        if A[i] < A[i + 1]:
            # index i is the break point
            ind = i
            break

    # If break point does not exist:
    if ind == -1:
        # reverse the whole array:
        A.reverse()
        return A

    # Step 2: Find the next greater element
    #         and swap it with arr[ind]:
    # since we know rest of arr is descending, lease greater will be found from the right
    for i in range(n - 1, ind, -1):
        if A[i] > A[ind]:
            A[i], A[ind] = A[ind], A[i]
            break

    # Step 3: reverse the right half:
    A[ind+1:] = reversed(A[ind+1:])

    return A

if __name__ == "__main__":
    A = [2, 1, 5, 4, 3, 0, 0]
    ans = nextGreaterPermutation(A)

    print("The next permutation is: [", end="")
    for it in ans:
        print(it, end=" ")
    print("]")

"""


# my method 2
def nextPerm2(arr):
    size = len(arr)
    result = []

    for i in range(size - 1, -1, -1):
        # edge case
        if i == 0:
            return arr.sort()

        if arr[i] > arr[i - 1]:
            minGreater = i
            for j in range(i + 1, size):
                if arr[j] > arr[i - 1] and arr[j] < arr[minGreater]:
                    minGreater = j
            temp = []
            for j in range(i, size):
                if j != minGreater:
                    temp.append(arr[j])

            temp.append(arr[i - 1])

            temp.sort()
            for j in range(i - 1):
                result.append(arr[j])

            result.append(arr[minGreater])

            for j in range(len(temp)):
                result.append(temp[j])
            break

    return result


# print(nextPerm2(arr))
