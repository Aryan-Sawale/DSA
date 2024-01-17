# O(N) O(1) 
def fibonacci(N):
  n1 = 0
  n2 = 1
  # 0 1 1 2 3 5 8 ...
  if (N == 0 or N == 1): 
    return N
  
  # TODO: in interview , handle N < 0 as well
  current = n1 + n2
  for i in range (2, N+1):
    current = n1 + n2
    n1 = n2
    n2 = current
  
  return current

# O(2^N) O(N)
# For each Fibonacci(N) calculation, you make two recursive calls: one for Fibonacci(N-1) and another for Fibonacci(N-2). Each of those calls, in turn, makes two more recursive calls, and so on. This branching of recursive calls leads to an exponential growth in the number of function calls as you increase the value of N.
def fibonacciRecur(N):
  if (N == 0 or N == 1): 
    return N
  
  return  fibonacciRecur(N-1) + fibonacciRecur(N-2)

# O(N) O(N) 
def fibonacciDP(N, Array):
  Array[0] = 0
  Array[1] = 1

  if (Array[N] == -1):
    Array[N] = Array[N-1] + Array[N-2]
    return Array[N]
  else:
    return Array[N]

N = 4

print(fibonacciRecur(N))
Array = [-1]*N
print(fibonacciDP(N, Array))