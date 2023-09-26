key = "I love apples. hello"

def countCharsWords(key):
  counter = 0
  for i in range(len(key)):
    if (key[i] == ' '): 
      counter += 1
  
  return [len(key) - counter, counter + 1]


print(countCharsWords(key))