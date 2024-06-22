arr = [3, 1, 2]


def subseqs(i, res, arr):
    if i >= len(arr):
        print(res)
        return

    # take
    res.append(arr[i])
    subseqs(i + 1, res, arr)

    # Don't take
    res.pop()
    subseqs(i + 1, res, arr)


subseqs(0, [], arr)

"""
# 2 choices for every place (take or not take) => 2 * 2 * 2...n times => 2^n
# for every choice print O(n) 
# total = O(2^n * n)
# Max recursion calls are n => O(n) space
"""
