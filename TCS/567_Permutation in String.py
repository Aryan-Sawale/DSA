from collections import defaultdict

"""
As the |a| set is 26 and limited, we can brute force it by doing a sliding window and compare character by character frequency. Permutation is irrelevant in this question, the count of characters are the only thing we consider. We just run a fix size sliding window, compare the
sliding hashmap with the fixed s1 hashmap.

# The problem requires checking whether any permutation of s1 is a substring of s2. This can be efficiently solved using the sliding window technique along with a hash table (or frequency counter).
# hashtable will store the frequency of each character in s1.
# running_hashtable will store the frequency of characters in the current window of s2 that we are examining.
"""


class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        hashtable = defaultdict(int)
        running_hashtable = defaultdict(int)
        if len(s1) > len(s2):
            return False
        for i in range(len(s1)):
            hashtable[s1[i]] += 1
            if i < len(s1) - 1:
                running_hashtable[s2[i]] += 1
        l = 0
        for j in range(len(s1) - 1, len(s2)):
            running_hashtable[s2[j]] += 1
            flag = True
            for k, v in running_hashtable.items():

                if v > 0:
                    if hashtable.get(k, 0) != v:
                        flag = False
                        break
                else:
                    if hashtable[k] > 0:
                        flag = False
                        break
            if flag:
                return True

            running_hashtable[s2[l]] -= 1
            l += 1
        return False
