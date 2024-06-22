# https://takeuforward.org/data-structure/set-matrix-zero/
matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]


def setZeroes2(matrix):
    rows = len(matrix)
    cols = len(matrix[0])

    col0 = 1
    # step 1: Traverse the matrix and
    # mark 1st row & col accordingly:
    for i in range(rows):
        for j in range(cols):
            if matrix[i][j] == 0:
                # for rows
                matrix[i][0] = 0

                # for cols
                if j == 0:
                    col0 = 0
                else:
                    matrix[0][j] = 0

    # Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for i in range(1, rows):
        for j in range(1, cols):
            if matrix[i][j] != 0:
                # check for col & row:
                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0

    # step 3: Finally mark the 1st row & then 1st :
    if matrix[0][0] == 0:
        for j in range(cols):
            matrix[0][j] = 0

    if col0 == 0:
        for i in range(rows):
            matrix[i][0] = 0

    return matrix


# my sol
# O(nm) O(m + n)
def setZeroes(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    zero_rows = set()
    zero_cols = set()
    for i in range(rows):
        for j in range(cols):
            if matrix[i][j] == 0:
                zero_rows.add(i)
                zero_cols.add(j)

    for i in range(rows):
        for j in range(cols):
            if i in zero_rows or j in zero_cols:
                matrix[i][j] = 0

    return matrix


print(setZeroes2(matrix))

# https://takeuforward.org/data-structure/set-matrix-zero/
