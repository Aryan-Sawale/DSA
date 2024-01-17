def factorial(N):
  if (N == 0): return 1
  if (N < 0): return "Invalid"

  result = 1
  for i in range (N, 0, -1):
    result *= i
  
  return result

def factorialRecur(N):
  if (N == 0): return 1
  if (N < 0): return "Invalid"

  # if (N == 1): return 1

  return N * factorialRecur(N-1)


N = 5
print(factorialRecur(N))