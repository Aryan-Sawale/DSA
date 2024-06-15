# O(2^N) O(N)
# For each Fibonacci(N) calculation, you make two recursive calls: one for Fibonacci(N-1) and another for Fibonacci(N-2). Each of those calls, in turn, makes two more recursive calls, and so on. This branching of recursive calls leads to an exponential growth in the number of function calls as you increase the value of N.
def fibonacciRecur(N):
    if N <= 1:
        return N

    return fibonacciRecur(N - 1) + fibonacciRecur(N - 2)


# O(N) O(N)
def fibonacciDP(n, dp):
    if dp[n] != -1:
        return dp[n]

    dp[n] = fibonacciDP(n - 1, dp) + fibonacciDP(n - 2, dp)

    return dp[n]


# O(N) O(1)
def fibonacci(N):
    n1 = 0
    n2 = 1
    # 0 1 1 2 3 5 8 ...
    if N <= 1:
        return N

    # TODO: in interview , handle N < 0 as well
    current = n1 + n2
    for i in range(2, N + 1):
        current = n1 + n2
        n1 = n2
        n2 = current

    return current


n = 4

print(fibonacciRecur(n))

dp = [-1] * (n + 1)

for i in range(2):
    dp[i] = i

print(fibonacciDP(n, dp))
