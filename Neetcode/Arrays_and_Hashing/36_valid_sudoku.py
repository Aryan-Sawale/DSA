import collections

board = [["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

def isValidSudoku(board):
    dict_row = collections.defaultdict(set)
    dict_col = collections.defaultdict(set)
    dict_square = collections.defaultdict(set)

    for i in range(9):
        for j in range(9):
            if (board[i][j] == "."):
                continue

            if ( (board[i][j] in dict_row[i]) or 
                (board[i][j] in dict_col[j]) or 
                (board[i][j] in dict_square[(i // 3, j // 3)]) ):
                return False
            
            dict_row[i].add(board[i][j])
            dict_col[j].add(board[i][j])
            dict_square[(i // 3, j // 3)].add(board[i][j])
    
    return True

print(isValidSudoku(board))