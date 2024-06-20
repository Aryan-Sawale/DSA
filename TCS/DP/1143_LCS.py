text1 = "abcde"
text2 = "ace"

"""
# Start from 2 ends of strings
# If (s1[n - 1] == s2[m - 1]) then we can shorten both strings and focus on remaining part (1 + recur)
# if they aren't equal, we must consider max of result after shortening s1 or shortening s2 (0 + recur)
# base case, when after shortening one of the index becomes -1, return 0
# dp table = n * m for all index pairs
"""


# Time - O(N * M)
# Space - O(N * M) (dp) + O(N + M) (max stack recursion) (if all chars are different, it will reach 0 length of both strings 1 by 1)
def LCSutil(text1, text2, ind1, ind2, dp):
    # base case
    if ind1 < 0 or ind2 < 0:
        return 0

    # If the result for this state is already calculated, return it
    if dp[ind1][ind2] != -1:
        return dp[ind1][ind2]

    if text1[ind1] == text2[ind2]:
        dp[ind1][ind2] = 1 + LCSutil(text1, text2, ind1 - 1, ind2 - 1, dp)

    if text1[ind1] != text2[ind2]:
        dp[ind1][ind2] = 0 + max(
            LCSutil(text1, text2, ind1, ind2 - 1, dp),
            LCSutil(text1, text2, ind1 - 1, ind2, dp),
        )

    return dp[ind1][ind2]


def LCS(text1, text2):
    n = len(text1)
    m = len(text2)
    dp = [[-1 for _ in range(m)] for _ in range(n)]

    res = LCSutil(text1, text2, n - 1, m - 1, dp)

    return res


def LCStabulation(text1, text2):
    n = len(text1)
    m = len(text2)

    dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if text1[i - 1] == text2[j - 1]:
                dp[i][j] = 1 + dp[i - 1][j - 1]
            else:
                dp[i][j] = 0 + max(dp[i][j - 1], dp[i - 1][j])

    return dp[n][m]


"""
Brute Force
# Generate all subsequences 
# Compare all of them => nested loop of 2^n and 2^m => O(2^n * 2^m)
# Space comp => storage of subseqs => O(2^max(n, m))

Recursion without DP
# Time comp => branch factor 2 and max depth (m + n) => O(2^(n + m))
# Space comp => O(m + n) [max stack space]

Recursion with DP (Memoization)
# Time comp => O(n * m) [operations equal to size of table]
# Space comp => O(n * m) [size of table] + O(m + n) [stack space]

Iteration with DP (Tabulation)
# Time comp => O(n * m) [operations equal to size of table]
# Space comp => O(n * m) [size of table] 
"""

"""
Recursion/DP rules:
1) Express everything using index
2) Explore possibility on that index
3) Tale the best among them
"""

"""
Memoization to Tabulation
1) Copy the base case
2) Write down changing parameters in opposite fashion (i , j)
3) Copy the recurrence
"""
