n = 34


# brute force
# O(n)
def isPrime(n):
    for i in range(2, n):
        if n % i != 0:
            return False

    return True


# optimized
# O(n^1/2)
def isPrimeOpt(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i != 0:
            return False

    return True


print(isPrimeOpt(n))
