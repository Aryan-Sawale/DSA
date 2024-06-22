s = "abc"


def palStrings(s):
    n = len(s)
    table = [[0 for x in range(n)] for y in range(n)]

    counter = 0

    # length 1
    for i in range(n):
        table[i][i] = 1
        counter += 1

    # length 2
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            table[i][i + 1] = 1
            counter += 1

    # length 3 to n
    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1
            if table[i + 1][j - 1] == 1 and s[i] == s[j]:
                table[i][j] = 1
                counter += 1

    return counter


print(palStrings(s))
