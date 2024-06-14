# Can check all chars from first string for brute force
# But you just need to sort the array and then compare first and last string. (if prefixes are different, the first and last will be most different)
class Solution:
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""

        strs.sort()
        first = strs[0]
        last = strs[-1]
        i = 0
        while i < len(first) and i < len(last) and first[i] == last[i]:
            i += 1
        return first[:i]
