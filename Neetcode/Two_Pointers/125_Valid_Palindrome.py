s = "A man, a plan, a canal: Panama"

def isPalindrome(s):
  size = len(s)
  left, right = 0, size - 1
  while (left < right):
    while (left < right) and (not s[left].isalnum()):
      left += 1

    while (left < right) and (not s[right].isalnum()):
      right -= 1

    if (s[left].lower() == s[right].lower()):
      left += 1
      right -= 1
    else:
       return False
  
  return True
    
      
        

print(isPalindrome(s))

# O(n) and O(n)
def isPalindrome2(s):
    alphanumeric = ""
    for char in s:
        if (char.isalnum()):
          alphanumeric += char

    lowercase = alphanumeric.lower()
    reversed_str = lowercase[::-1]

    return reversed_str == lowercase