nums = [0, 1, 0, 3, 2, 3]
# nums = [10, 9, 2, 5, 3, 7, 101, 18]


# Becomes O(n^2) beceause you are filling a dp table of size n*(n+1)
# Instead of going through all subsequences = O(2^n)
# # O(n^2) O(n)
"""
The top-down approach, also known as memoization, involves solving the problem recursively 
and storing the results of subproblems to avoid redundant calculations.
"""


def longestSubUtil(nums, n, dp, ind, prev_index):
    # base case
    if ind >= n:
        return 0

    if dp[ind][prev_index + 1] != -1:
        return dp[ind][prev_index + 1]

    notTaken = 0 + longestSubUtil(nums, n, dp, ind + 1, prev_index)

    taken = 0
    if prev_index == -1 or nums[ind] > nums[prev_index]:
        taken = 1 + longestSubUtil(nums, n, dp, ind + 1, ind)

    dp[ind][prev_index + 1] = max(taken, notTaken)
    return dp[ind][prev_index + 1]


def longestSub(nums):
    n = len(nums)
    # n + 1 becaue prev_ind goes from -1 to n-1. But array doesn't have -1 index, so it is shifted to 0 to n+1.
    # dp[1][0] reprsents index 1 with prev_index -1
    # dp[2][1] reprsents index 2 with prev_index 0
    dp = [[-1 for _ in range(n + 1)] for _ in range(n)]
    res = longestSubUtil(nums, n, dp, 0, -1)

    return res


# O(n^2) O(n)
"""
The bottom-up approach, also known as tabulation, involves solving all subproblems iteratively
and using the results to build up to the solution of the main problem.

# Go from index 1 to n - 1
# The idea is, find max length till current i [0...i]
# max length till current i will be:
  max of (current i, (max length till j) + 1)  (if nums[i] > nums[j])
# j will go from 0 to i - 1
"""


def lis_bottom_up(nums):
    n = len(nums)
    # default length of all indices is 1
    dp = [1] * n

    for i in range(1, n):
        for j in range(i):
            if nums[i] > nums[j]:
                dp[i] = max(dp[i], dp[j] + 1)

    return max(dp)


# Example usage:
nums = [10, 9, 2, 5, 3, 7, 101, 18]
print(lis_bottom_up(nums))  # Output: 4


print(longestSub(nums))

"""
Brute force: O(2^n)
# 2 choices for every place (take or not take) => 2 * 2 * 2...n times => 2^n
f(ind, prev_index){

    if(ind == n)
        return 0

    notTake = 0 + f(ind + 1, prev_index)

    if(prev_index == -1 || arr[ind]>arr[prev_index]){
        take = 1 + f(ind + 1, ind)
    }

    return max(notTake, take)
}

"""
