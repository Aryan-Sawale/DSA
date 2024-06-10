def pat1(n):
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print()


def pat2(n):
    for i in range(n):
        for j in range(i + 1):
            print("*", end="")
        print()


def pat3(n):
    for i in range(n):
        for j in range(n - i):
            print("*", end="")
        print()


def pat4(n):
    for i in range(n):
        for j in range(i + 1):
            print(j + 1, end=" ")
        print()


# can also solve by considering pat 2 and pat 3 (modified where i = i - n)
def pat5(n):
    for i in range((2 * n) - 1):
        if i < n:
            for j in range(i + 1):
                print("*", end="")
            print()
        else:
            # 9 - 9 + 1, 9 - 8 + 1 (from end) = ((2 * n) - 1) - (i + 1) + 1
            for j in range(2 * n - (i + 1)):
                print("*", end="")
            print()


# total 5 positions
# n - row spaces, rest stars
def pat6(n):
    for i in range(n):
        for j in range(n - (i + 1)):
            print(" ", end="")
        for k in range(i + 1):
            print("*", end="")
        print()


# total 5 positions
# row - 1 spaces, rest (n - (row - 1)) stars
def pat7(n):
    for i in range(n):
        for j in range(i):
            print(" ", end="")
        for k in range(n - i):
            print("*", end="")
        print()


# total 2n - 1 positions
# n - row spaces, 2*row - 1 stars
def pat8(n):
    for i in range(n):
        for j in range(n - (i + 1)):
            print(" ", end="")
        for k in range(2 * (i + 1) - 1):
            print("*", end="")
        print()


# total 2n - 1 positions
# row - 1 spaces,
# 2n - 1 - 0 => 1st row
# 2n - 1 - 2
# 2n - 1 - 4
# 2n - 1 - 6 => 4th row
# 2n - 1 - (2 * (row - 1)) stars
def pat9(n):
    for i in range(n):
        for j in range((i + 1) - 1):
            print(" ", end="")
        for k in range(((2 * n) - 1) - (2 * i)):
            print("*", end="")
        print()


# 2n - 1 positions
# n - row spaces
# 2*row - 1 alternates
def pat10a(n):
    for i in range(n):
        for j in range(n - (i + 1)):
            print(" ", end="")
        for k in range((2 * (i + 1)) - 1):
            # look at 0-indexing
            if k % 2 == 0:
                print("*", end="")
            else:
                print(" ", end="")
        print()


# easier way
# consider "* " as single entity
# n - row spaces
# row entities
def pat10(n):
    for i in range(n):
        for j in range(n - (i + 1)):
            print(" ", end="")
        for k in range(i + 1):
            print("* ", end="")
        print()


# 2n - 1 positions
# row - 1 spaces
# 2n - 1 - 0 => 1st row
# 2n - 1 - 2
# 2n - 1 - 4
# 2n - 1 - 6 => 4th row
# 2n - 1 - (2 * (row - 1)) alternates
def pat11a(n):
    for i in range(n):
        for j in range((i + 1) - 1):
            print(" ", end="")
        for k in range((2 * n - 1) - (2 * i)):
            if k % 2 == 0:
                print("*", end="")
            else:
                print(" ", end="")
        print()


# easier
# consider "* " as a single entity
# row - 1 spaces
# n - (row - 1) entities
def pat11(n):
    for i in range(n):
        for j in range(i):
            print(" ", end="")
        for k in range(n - i):
            print("* ", end="")
        print()


# 2n rows
# 2n - 1 positions
# for first n => pat 11
# for second n => pat 10 modified
# consider second pattern separately, then consider main i as i - n
def pat12a(n):
    for i in range(2 * n):
        if i < n:
            for j in range((i + 1) - 1):
                print(" ", end="")
            for k in range((2 * n - 1) - (2 * i)):
                if k % 2 == 0:
                    print("*", end="")
                else:
                    print(" ", end="")
            print()

        else:
            for j in range(n - ((i - n) + 1)):
                print(" ", end="")
            for k in range((2 * ((i - n) + 1)) - 1):
                # look at 0-indexing
                if k % 2 == 0:
                    print("*", end="")
                else:
                    print(" ", end="")
            print()


# easier way
# 2n rows
# consider "* " as a single entity
# for first n => row - 1 spaces, n - row - 1 entities
# for next n => 2n - row spaces, row - n entities
def pat12(n):
    for i in range(2 * n):
        if i < n:
            for j in range(i):
                print(" ", end="")
            for k in range(n - i):
                print("* ", end="")
        else:
            for j in range((2 * n) - (i + 1)):
                print(" ", end="")
            for k in range((i + 1) - n):
                print("* ", end="")
        print()


# this approach is hacky beacuse of extra space in 2nd pattern
# first n => pat 10
# rest n - 1 => pat 11 (modified where i = i - n and n = n - 1)
def pat28(n):
    for i in range(2 * n - 1):
        if i < n:
            # n - row
            for j in range(n - (i + 1)):
                print(" ", end="")

            # 2 * row - 1
            for k in range((2 * (i + 1)) - 1):
                if k % 2 == 0:
                    print("*", end="")
                else:
                    print(" ", end="")
        else:
            # row - 1 + extra space
            for j in range(((i - n) + 1) - 1 + 1):
                print(" ", end="")

            # 2n - 1 - (2 * (row - 1)), here n is 4 i.e (n-1)
            for k in range((2 * (n - 1) - 1) - (2 * (((i - n) + 1) - 1))):
                if k % 2 == 0:
                    print("*", end="")
                else:
                    print(" ", end="")

        print()


# easier way
# consider "* " as a single entity
# 2n - 1 rows
# first n => n - row spaces, row entities
# next n - 1 => row - n spaces, 2n - row entities
def pat28(n):
    for i in range((2 * n) - 1):
        if i < n:
            for j in range(n - (i + 1)):
                print(" ", end="")
            for k in range(i + 1):
                print("* ", end="")
        else:
            for j in range((i + 1) - n):
                print(" ", end="")
            for k in range((2 * n) - (i + 1)):
                print("* ", end="")
        print()


# 17, 18, 31, 32
pat28(5)
