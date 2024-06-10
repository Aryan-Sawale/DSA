# swap without temp variable
a = 1
b = 4


def swapAdd(a, b):
    a = a + b
    b = a - b
    a = a - b

    return a, b  # returns tuple by default


def swapMul(a, b):
    a = a * b
    b = a / b
    a = a / b

    return a, b


# working principle:
# a XOR a = 0 , a XOR 0 = a, associative and commutative
# in second step, b ^ a => b ^ (a ^ b) => (b ^ b) ^ a => (0) ^ a => a
# in third step, b ^ a => a ^ (a ^ b) => (a ^ a) ^ b => (0) ^ b => b
def swapBit(a, b):
    a = a ^ b
    b = b ^ a
    a = b ^ a

    return a, b


swapped = swapAdd(a, b)
a = swapped[0]
b = swapped[1]
print(f"a : {a}, b: {b}")
