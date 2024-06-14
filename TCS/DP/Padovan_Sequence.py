# gfg POTD
# https://www.geeksforgeeks.org/problems/padovan-sequence2855/1


# recursion with DP
# No. of operations = filling DP table => O(n)
# Space = O(n) [stack space or DP table]
def padovanUtil(n, dp):
    if dp[n] != -1:
        return dp[n]

    dp[n] = padovanUtil(n - 2, dp) + padovanUtil(n - 3, dp)
    return dp[n]


def padovanSequence(n):
    dp = [-1] * (n + 1)
    for i in range(3):
        dp[i] = 1

    return padovanUtil(n, dp)


# Brute force recursion
# branch factor 2 and max stack is n => O(2^n)
# space = O(n) [stack]
class Solution:
    def padovanSequence(self, n):
        if n <= 2:
            return 1

        return self.padovanSequence(n - 2) + self.padovanSequence(n - 3)
