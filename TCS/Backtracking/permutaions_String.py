# https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

# Python3 program to print all permutations with
# duplicates allowed


def toString(List):
    return "".join(List)


# Function to print permutations of string
# This function takes three parameters:
# 1. String
# 2. Starting index of the string
# 3. Ending index of the string.


"""
Idea is to fix L and R, and swap rest of chars with L 1 by 1.
Permute for rest of string => (L + 1) to R
Swap back
# Basically swapping, then fixing that char on that position and permuting for rest of string
"""


def permute(a, l, r):
    if l == r:
        print(toString(a))
    else:
        for i in range(l, r):
            a[l], a[i] = a[i], a[l]
            permute(a, l + 1, r)
            a[l], a[i] = a[i], a[l]  # backtrack


# Driver code
string = "ABC"
n = len(string)
a = list(string)

# Function call
permute(a, 0, n)
