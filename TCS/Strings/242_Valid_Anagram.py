from collections import defaultdict

s, t = "anagram", "naggram"


def validAnagram(s, t):
    if len(s) != len(t):
        return False

    smap = defaultdict(int)
    tmap = defaultdict(int)
    for i in range(len(s)):
        smap[s[i]] += 1
        tmap[t[i]] += 1

    return smap == tmap


print(validAnagram(s, t))
