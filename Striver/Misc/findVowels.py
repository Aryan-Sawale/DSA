s = "Aryan"


def findVowels(s):
    vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]
    res = []

    for i in range(len(s)):
        if s[i] in vowels:
            res.append(s[i])

    return res


print(findVowels(s))
