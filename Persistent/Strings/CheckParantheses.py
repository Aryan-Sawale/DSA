key = "[()]{}{[()()]()}"

def checkPar(key):
  stack = []  
  flag = True
  for i in range (len(key)):
    if not stack:
      stack.append(key[i])
      continue

    if (key[i] in ["{", "[", "("]):
      stack.append(key[i])

    if (key[i] == "}"):
      if (stack.pop() == "{"):
        continue
      else:
        flag = False
        break

    if (key[i] == ")"):
      if (stack.pop() == "("):
        continue
      else:
        flag = False
        break

    if (key[i] == "]"):
      if (stack.pop() == "["):
        continue
      else:
        flag = False
        break
  
  if stack:
    flag = False
  
  return flag
      
        

print(checkPar(key))