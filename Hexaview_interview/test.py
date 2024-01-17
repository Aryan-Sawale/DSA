N = int(input())

def pattern(N):
  for i in range(N):
    for j in range(0, (2*i + 1)):
      spaces = N - i - 1
      for k in range(spaces):
        print("  ", end="")  # Print spaces here
      print("*", end=" ")
    print()

pattern(N)  # Call the function without print()