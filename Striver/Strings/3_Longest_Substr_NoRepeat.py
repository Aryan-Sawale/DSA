s = "abcabcbb"


# this is actually brute-force with O(n^2)
def longestSubstr(s):
    i = 0
    j = 1
    charSet = set()
    charSet.add(s[i])
    maxLen = 1

    while j < len(s):
        if s[j] not in charSet:
            charSet.add(s[j])
            maxLen = max(maxLen, (j - i + 1))
            j += 1
        else:
            i += 1
            j = i + 1
            charSet = set()
            charSet.add(s[i])

    return maxLen


# O(N) [O(2*N) max with inner while loop]
# intuition: move forward with right, when repetition occurs => start from position after repeated character
def longestSubstr2(s):
    maxLen = 0
    l = 0
    charSet = set()
    for r in range(len(s)):
        if s[r] in charSet:
            while s[r] in charSet and l < r:
                charSet.remove(s[l])
                l += 1

        charSet.add(s[r])
        maxLen = max(maxLen, r - l + 1)

    return maxLen


print(longestSubstr2(s))
