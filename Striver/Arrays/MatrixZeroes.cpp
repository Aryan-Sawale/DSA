// chatgpt conversion
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> setZeroes2(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int col0 = 1;

    // Step 1: Traverse the matrix and mark 1st row & col accordingly
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                // For rows
                matrix[i][0] = 0;

                // For cols
                if (j == 0) {
                    col0 = 0;
                } else {
                    matrix[0][j] = 0;
                }
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1)
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] != 0) {
                // Check for col & row
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    // Step 3: Finally mark the 1st col and then 1st row
    if (matrix[0][0] == 0) {
        for (int j = 0; j < cols; j++) {
            matrix[0][j] = 0;
        }
    }

    if (col0 == 0) {
        for (int i = 0; i < rows; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    vector<vector<int>> result = setZeroes2(matrix);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    unordered_set<int> zero_rows;
    unordered_set<int> zero_cols;

    // Step 1: Identify zero elements and store their row and column indices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zero_rows.insert(i);
                zero_cols.insert(j);
            }
        }
    }

    // Step 2: Set zero elements in the identified rows and columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (zero_rows.count(i) || zero_cols.count(j)) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}