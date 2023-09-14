s = "dvdf"

def noRepeat2(s):
    charSet = set()
    l = 0
    res = 0

    for r in range(len(s)):
        while s[r] in charSet:
            charSet.remove(s[l])
            l += 1
        charSet.add(s[r])
        res = max(res, r - l + 1)
    return res


print(noRepeat2(s))

# My approach. Both have same complexity but neet's logic is cleaner
def noRepeat(s):
    size = len(s)
    if (size <= 1): return size
    left, right = 0, 1
    longest = 0
    uset = {s[left]}
    while(right < size):
        if s[right] in uset:
            longest = max(longest, len(uset))
            left += 1
            uset = {s[left]}
            right = left + 1
            continue
        
        uset.add(s[right])
        right += 1

    longest = max(longest, len(uset))
    return longest