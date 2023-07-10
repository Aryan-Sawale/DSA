s, t = "anagram", "naharam"

def isAnagram(s, t):
    dict1 = {}
    dict2 = {}

    if len(s) != len(t):
        return False

    for i in range(len(s)):
            dict1[s[i]] = 1 + dict1.get(s[i], 0)
            dict2[t[i]] = 1 + dict2.get(t[i], 0)
    # .get(key) is used for retrieving the value, but if you use .get(key, defaultVal) then the default None gets replaced with defaultVal

    return dict1 == dict2

print(isAnagram(s, t))

"""
def isAnagram(s, t):
  dict1 = {}
  dict2 = {}

  if (len(s) != len(t)):
    return False

  for i in range(len(s)):
    if s[i] not in dict1:
      dict1[s[i]] = 1
    else:
      dict1[s[i]] += 1

  # the if-else can be replaced by dict1[char] = dict1.get(char, 0) + 1

  for i in range(len(s)):
    if t[i] not in dict2:
      dict2[t[i]] = 1
    else:
      dict2[t[i]] += 1

  for key in dict1:
    if (key not in dict2 or dict1[key] != dict2[key]):
      return False
  # without the (key not in dict2) condition, (dict1[key] != dict2[key]) will raise a key error when the strings are not anagrams.
  # when you use (condition1) or (condition2), then condition2 is not evaluated if condition1 is true. This can be used to avoid errors.
  # If we had written (dict1[key] != dict2[key]) or (key not in dict2) then the first condition would have been evaluated and raised an error.
  
  return True
"""