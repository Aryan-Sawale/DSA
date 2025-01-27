key = 64

def checkPrime(key):
  for i in range(2, int(key**0.5) + 1):
    if (key % i == 0): return False

  return True

print(checkPrime(key))