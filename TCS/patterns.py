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
            # (2n - 1) - row + 1
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
def pat28a(n):
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
def pat28b(n):
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


# 17, 18, 21, 31, 32


# 2n - 1 rows
# till row < n + 1
# n - row spaces
# row to 1 print j
# 2 to row print j
# second part
# row - n spaces
# key = (2n - 1) - row + 1, key to 1 print i, 2 to key print j
def pat17(n):
    for i in range(2 * n - 1):
        if i < n:
            for j in range(n - (i + 1)):
                print(" ", end="")
            for j in range((i + 1), 0, -1):
                print(j, end="")
            for j in range(2, (i + 1) + 1):
                print(j, end="")
        else:
            for j in range((i + 1) - n):
                print(" ", end="")
            key = (2 * n - 1) - (i + 1) + 1
            for j in range(key, 0, -1):
                print(j, end="")
            for j in range(2, key + 1):
                print(j, end="")
        print()


# 2n - 1 rows, 2n - 1 cols
# number dependant on min distance from boundary
# boundaries => 1st row, 1st col, last row, last col
# dist = min(row - 1, col - 1, (2n - 2) - row, (2n - 2) - col)
# number for dist 0 = n - 0, dist 1 = n - 1 => n - dist
def pat31(n):
    for i in range(2 * n - 1):
        for j in range(2 * n - 1):
            dist = min(
                (i + 1) - 1, (j + 1) - 1, (2 * n - 1) - (i + 1), (2 * n - 1) - (j + 1)
            )
            print(n - dist, end=" ")
        print()


# n rows, row cols
# max_char => A + (n - 1)
# start_char on each row  => max_char - (row - 1)
def pat32(n):
    max_char = ord("A") + (n - 1)

    for i in range(n):
        start_char = max_char - ((i + 1) - 1)
        for j in range(i + 1):
            print(chr(start_char + j), end=" ")
        print()


def pat33(rows):
    # Initialize the first character to 'a'
    current_char = ord("a")

    for i in range(1, rows + 1):
        for j in range(i):
            # Print the current character with the correct case
            if (current_char - ord("a")) % 2 == 0:
                print(chr(current_char).lower(), end=" ")
            else:
                print(chr(current_char).upper(), end=" ")

            # Move to the next character
            current_char += 1

        # Move to the next line
        print()


def pat21(rows):
    num = 1
    for i in range(1, rows + 1):
        # Print numbers for the current row
        for j in range(i):
            print(num, end=" ")
            num += 1

        # Move to the next line
        print()


pat32(5)
