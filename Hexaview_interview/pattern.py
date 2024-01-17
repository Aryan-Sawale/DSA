N = int(input())

def pattern(N):
  for i in range(N):
    spaces = N - i - 1
    for k in range(spaces):
      print("  ", end="")
    for j in range(0, (2*i + 1)):
      print("*", end=" ")
    print()
    

pattern(N)