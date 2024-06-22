# https://www.geeksforgeeks.org/longest-palindromic-substring/
s = "babad"


def longestPal(s):
    n = len(s)
    table = [[0 for x in range(n)] for y in range(n)]

    start = 0
    maxLen = 1

    # All strings of length 1 are palindromes
    for i in range(n):
        table[i][i] = 1

    # Update all 2-length palindromes
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            table[i][i + 1] = 1
            maxLen = 2
            start = i

    # for length from 3 to n, check for palindromes
    # principle: if s[i..j] is a palindrome, s[i - 1...j+1] is also a palindrome if s[i-1] == s[j+1]
    for length in range(3, n + 1):
        # last substring of length len will start from i = n - len
        for i in range(n - length + 1):
            j = i + length - 1
            if table[i + 1][j - 1] and s[i] == s[j]:
                table[i][j] = 1
                maxLen = length
                start = i

    pal = s[start : start + maxLen]
    return pal


print(longestPal(s))

"""
# Checking palindrome for substring
bool checkPal(int i, int j, string str) {

  while (i < j) {
    if (str[i] != str[j]) return false;
    i++;
    j--;
  }
  return true;
}
"""
