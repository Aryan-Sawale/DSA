s = "skjdhsdh"


def reverse1(s):
    stack = []
    for i in range(len(s)):
        stack.append(s[i])

    res = ""
    for i in range(len(stack)):
        res += stack.pop()

    return res


def reverse2(s):
    left = 0
    right = len(s) - 1
    while left < right:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1


print(reverse1(s))
