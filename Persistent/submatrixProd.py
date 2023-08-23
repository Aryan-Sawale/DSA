matrix = [[1, 2, 3, 4],
          [5, 6, 7, 8], 
          [9, 10, 11, 12]]
X = 3
Y = 4
k = 10

def matrixProd(matrix, X, Y, k):
    res = 0
    for i in range(X):
        for j in range(Y):
            prod = 1
            for row in range(i+1):
                for col in range(j+1):
                    prod += matrix[row][col]
            if (prod <= k):
                res += 1
    
    return res
                    
            

print(matrixProd(matrix, X, Y, k))