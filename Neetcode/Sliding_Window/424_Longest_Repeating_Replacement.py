from collections import defaultdict
s = "ABAB"
k = 2


# optimization with array of size 26
def characterReplacementOpti(s, k):
    count = [0]*26
    res = 0
    l = 0
    for r in range(len(s)):
        count[ord(s[r]) - ord('A')] += 1
        maxFreq = max(count)
        while ((r - l + 1) - maxFreq > k):
            count[ord(s[l]) - ord('A')] -= 1
            l += 1
        
        res = max(res, r - l + 1)

    return res


# cleaner implementation by neetcode
def characterReplacement(self, s: str, k: int) -> int:
    count = {}
    res = 0
    l = 0
    for r in range(len(s)):
        count[s[r]] = 1 + count.get(s[r], 0)

        while ((r - l + 1) - max(count.values()) > k):
            count[s[l]] -= 1
            l += 1
        
        res = max(res, r - l + 1)

    return res

# my implementation of neetcode
def findMax(umap):
    maxFreq = 0
    for char in umap:
        maxFreq = max(maxFreq, umap[char])
    return maxFreq

def longestRepeater(s, k):
    size = len(s)
    umap = defaultdict(int)
    left, right = 0, 0
    windowLen = 1
    maxLen = 0
    while (right < size):
        umap[s[right]] += 1
        maxFreq = findMax(umap)
        if (windowLen - maxFreq <= k):
            maxLen = max(maxLen, windowLen)
        else:
            while (windowLen - maxFreq > k):
                umap[s[left]] -= 1
                left += 1
                windowLen -= 1 
        windowLen += 1
        right += 1
    
    return maxLen

print(characterReplacementOpti(s, k))        
# print(ord('B') - ord('A'))

# My solution, failed cuz edge case.
def longestRepeater2(s, k):
    size = len(s)
    left, right = 0, 0
    maxLen, counter = 0, 0
    switches = k
    uniqChars = set(s)
    # for char in uniqChars:
    #     while ()
    while (left < size):
        if (right == size):
            maxLen = max(maxLen, counter)
            counter = 0
            left += 1
            right = left
            switches = k
            continue
        elif (s[left] == s[right]): counter += 1
        elif (s[left] != s[right] and switches > 0):
            counter += 1
            switches -= 1
        elif (s[left] != s[right] and switches < 1): 
            maxLen = max(maxLen, counter)
            counter = 0
            left += 1
            right = left
            switches = k
            continue
        right += 1
    
    return maxLen