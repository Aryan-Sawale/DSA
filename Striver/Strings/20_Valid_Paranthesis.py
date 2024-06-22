s = "([{}])"


def validPal(s):
    stack = []
    for i in range(len(s)):

        # empty condition needed for case with only closing brackets. You can't pop an empty list
        if not stack or s[i] == "(" or s[i] == "{" or s[i] == "[":
            stack.append(s[i])
        else:
            if s[i] == ")" and stack.pop() != "(":
                return False
            if s[i] == "}" and stack.pop() != "{":
                return False
            if s[i] == "]" and stack.pop() != "[":
                return False

    # If stack is not empty
    if stack:
        return False

    return True


print(validPal(s))
print(chr(65))
