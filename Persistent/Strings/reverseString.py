key = "I love apples"

def reverseStr(key):
  left, right = 0, len(key) - 1
  keyArr = list(key)
  while (left < right):
    keyArr[left], keyArr[right] = keyArr[right], keyArr[left]
    left += 1
    right -= 1
  
  return "".join(keyArr)

def reverseStr2(key):
  stack = []
  result = ""
  for i in range(len(key)):
    stack.append(key[i])
  
  for i in range(len(stack)):
    result += stack.pop()

  return result


print(reverseStr2(key))
