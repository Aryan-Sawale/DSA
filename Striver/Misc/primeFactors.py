"""
12 = 2 X 2 X 3
12 / 2 = 6
6 / 2 = 3
3 / 3 = 1
"""

n = 12


def isPrimeOpt(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i != 0:
            return False

    return True


def primeFactors(n):
    facs = []
    div = n
    prime = 2
    while div != 1:
        print(f"{div} {prime}")
        if div % prime == 0:
            div /= prime
            facs.append(prime)
        else:
            prime += 1
            while not isPrimeOpt(prime):
                prime += 1
    return facs


print(primeFactors(n))
