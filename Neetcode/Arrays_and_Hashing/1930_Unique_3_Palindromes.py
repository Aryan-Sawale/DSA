from collections import defaultdict

s = "bbcbaba"

# O(k*n) => k is distinct chars
def threePals4(s):
  count = 0
  chars = set(s)
  for char in chars:
      first,last = s.find(char),s.rfind(char)
      count += len(set(s[first+1:last]))
  return count

print(threePals4(s))


# 22 testcases TLE
# O(n^4)
def checkPal(s):
    size = len(s)
    left, right = 0, size - 1
    while (left < right):
        if (s[left] != s[right]):
            return False
        left += 1
        right -= 1
    
    return True
def threePals(s):
    umap = defaultdict(int)
    size = len(s)
    temp = ""
    for i in range(size):
        for j in range(i+1, size):
            for k in range (j+1, size):
                temp += s[i]
                temp += s[j]
                temp += s[k]
                if (checkPal(temp)):
                    umap[temp] += 1
                temp = ""
    return len(umap)

# 44 testcases TLE
# O(n^3)
def threePals2(s):
    umap = defaultdict(int)
    size = len(s)
    temp = ""
    for i in range(size):
        for j in range(i+1, size):
           if s[i] in s[j+1:size]:
                temp += s[i]
                temp += s[j]
                temp += s[i]
                umap[temp] += 1
                temp = ""

    return len(umap)

# 45 testcases TLE
# O(n^2)
def threePals3(s):
    umap = defaultdict(int)
    size = len(s)
    temp = ""
    left, right = 0, size - 1
    while (left < right):
        while (s[right] != s[left] and left < right):
            right -= 1

        new_right = right - 1
        while (left < new_right):
            temp += s[left]
            temp += s[new_right]
            temp += s[right]
            umap[temp] += 1
            temp = ""
            new_right -= 1
        
        new_left = left + 1
        while (s[new_left] == s[left] and new_left < size):
            new_left += 1
          
        left = new_left
        right = size - 1

    return len(umap)         
