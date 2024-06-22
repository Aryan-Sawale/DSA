s = "hello I am bruh"


def revWords(s):
    words = s.split()
    words.reverse()
    return " ".join(words)


print(revWords(s))
