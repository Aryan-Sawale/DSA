"""
1) Brute force
# Generate all substrings = n^2 + m^2
# Compare all substrings = O(n^2 * m^2 * n) [nested for loop * compare string]


"""

S1 = "ABCDGH"
S2 = "ACDGHR"


def LongestCommonSubstring(S1, S2):
    n = len(S1)
    m = len(S2)

    dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]

    maxLen = 0
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if S1[i - 1] == S2[j - 1]:
                dp[i][j] = 1 + dp[i - 1][j - 1]
                maxLen = max(maxLen, dp[i][j])

    return maxLen


print(LongestCommonSubstring(S1, S2))
