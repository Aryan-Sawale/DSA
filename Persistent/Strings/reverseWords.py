key = "are you kidding me"

def reverseWords(key):
  return " ".join(key.split()[::-1])

print(reverseWords(key))