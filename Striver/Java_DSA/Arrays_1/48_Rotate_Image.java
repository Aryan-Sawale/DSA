import java.util.*;

public class Rotate_Image
{
    // Brute force
    // First row => last col, second col => second last row in new matrix
    // In new matrix rotated[j][n - i - 1] = matrix[i][j]
    // col in original matrix decides row in new one. first row means last col etc.
    
    // ** transpose[j][i] = matrix[i][j]. row is col in transpose and vice versa.
    // For inplace, you can just swap.
    // Make sure not to double swap, start second for with int j = i.
    
    // Optimal
    // By observation, we see that the first column of the original matrix is the reverse of the first row of the rotated matrix.
    // 1) Transpose the matrix
    // 2) Reverse each row of matrix
    public static void rotate(int[][] matrix)
    {
        int length = matrix.length;

        // Transpose the matrix
        for (int i = 0; i < length; i++)
        {
            for (int j = i; j < length; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Reverse each row of matrix
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length / 2; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][length - j - 1];
                matrix[i][length - j - 1] = temp;
            }
        }

        
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int[][] matrix = {{1,2,3},{4,5,6},{7,8,9}};
        rotate(matrix);
    }
}
