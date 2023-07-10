#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku (vector<vector<char>>& board)
{
  unordered_map<int, unordered_set<char>> umap_row;
  unordered_map<int, unordered_set<char>> umap_col;
  unordered_map<string, unordered_set<char>> umap_square;

  for (int i = 0; i < 9; i++)
  {
     for (int j = 0; j < 9; j++)
     {
        if (board[i][j] == '.') continue;

        // make string key to identify 9 squares
        string key = to_string(i/3) + to_string(j/3);

        // check if current number is already present in the current row or column or square
        if ((umap_row[i].find(board[i][j]) != umap_row[i].end()) || 
        (umap_col[j].find(board[i][j]) != umap_col[j].end()) || 
        (umap_square[key].find(board[i][j]) != umap_square[key].end()))
        {
          return false;
        }

        // insert the current number into current row, column and square sets
        umap_row[i].insert(board[i][j]);
        umap_col[j].insert(board[i][j]);
        umap_square[key].insert(board[i][j]);
     }
  }

  return true;
}

int main()
{
  vector<vector<char>> board = 
{
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'},
{'.','.','.','.','.','.','.','.','.'}
};


  cout << isValidSudoku(board);
}

// [[".",".","4",".",".",".","6","3","."],
// [".",".",".",".",".",".",".",".","."],
// ["5",".",".",".",".",".",".","9","."],
// [".",".",".","5","6",".",".",".","."],
// ["4",".","3",".",".",".",".",".","1"],
// [".",".",".","7",".",".",".",".","."],
// [".",".",".","5",".",".",".",".","."],
// [".",".",".",".",".",".",".",".","."],
// [".",".",".",".",".",".",".",".","."]]

// array[i] is considered the row and array[i][j] is considered the column
// it is confusing because physically rows are usually horizontal but they are vertical in this case
// my solution
// runs faster on leetcode
bool isValidSudoku2 (vector<vector<char>>& board)
{
  // check rows and columns
  for (int i = 0; i < 9; i++)
  {
    unordered_set<char> uset_row;
    unordered_set<char> uset_col;
    for (int j = 0; j < 9; j++)
    {
      // moving horizontally
      if (board[i][j] != '.')
      {
        if (uset_row.find(board[i][j]) == uset_row.end())
        {
          uset_row.insert(board[i][j]);
        }
        else
        {
          return false;
        }
      }

      // moving vertically
      if (board[j][i] != '.')
      {
        if (uset_col.find(board[j][i]) == uset_col.end())
        {
          uset_col.insert(board[j][i]);
        }
        else
        {
          return false;
        }
      }
    }
  }

  // check sub-boxes
  // set of 3 sets
  for (int l = 0; l < 7; l+=3)
  {
    // set of 3 squares 
    for (int k = 0; k < 7; k+=3)
    {
      unordered_set<char> uset;
      // rows
      for (int i = 0 + l; i < 3 + l; i++)
      {
        // columns
        for (int j = 0 + k; j < 3 + k; j++)
        {
          if (board[i][j] != '.')
          {
            if (uset.find(board[i][j]) == uset.end())
            {
              uset.insert(board[i][j]);
            }
            else
            {
              return false;
            }
          }
        }
      }
    }
  }


  return true;
}