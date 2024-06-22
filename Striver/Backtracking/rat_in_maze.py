m = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]

n = 4

result = []


def isValid(i, j, n, m):
    if i >= 0 and i < n and j >= 0 and j < n and m[i][j] == 1:
        return True

    return False


def ratMaze(m, n, rati, ratj, path):
    # Base condition
    if rati == n - 1 and ratj == n - 1:
        result.append(path)
        print(path)
        return None

    # Mark the current cell as visited
    m[rati][ratj] = 0

    # UP
    if isValid(rati - 1, ratj, n, m):
        ratMaze(m, n, rati - 1, ratj, path + "U")

    # DOWN
    if isValid(rati + 1, ratj, n, m):
        ratMaze(m, n, rati + 1, ratj, path + "D")

    # LEFT
    if isValid(rati, ratj - 1, n, m):
        ratMaze(m, n, rati, ratj - 1, path + "L")

    # RIGHT
    if isValid(rati, ratj + 1, n, m):
        ratMaze(m, n, rati, ratj + 1, path + "R")

    # Unmark the current cell (backtrack)
    m[rati][ratj] = 1

    return None


ratMaze(m, n, 0, 0, "")

# separate visited[][] can also be used

"""
1) cameFrom condition will only prevent immediate backtracking but it will not prevent loops 
2) That is why marking visited and unmarking is necessary

def ratMaze(m, n, rati, ratj, cameFrom, path):
    # Base condition
    if rati == n - 1 and ratj == n - 1:
        result.append(path)
        print(path)
        return None

    # UP
    if cameFrom != "U" and isValid(rati - 1, ratj, n, m):
        ratMaze(m, n, rati - 1, ratj, "D", path + "U")

    # DOWN
    if cameFrom != "D" and isValid(rati + 1, ratj, n, m):
        ratMaze(m, n, rati + 1, ratj, "U", path + "D")

    # LEFT
    if cameFrom != "L" and isValid(rati, ratj - 1, n, m):
        ratMaze(m, n, rati, ratj - 1, "R", path + "L")

    # RIGHT
    if cameFrom != "R" and isValid(rati, ratj + 1, n, m):
        ratMaze(m, n, rati, ratj + 1, "L", path + "R")

    return None
"""
