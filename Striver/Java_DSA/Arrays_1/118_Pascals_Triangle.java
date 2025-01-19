import java.util.*;

class PascalsTriangle {
    // There are other methods such as using nCr, which is more efficient if you
    // only need 1 row or 1 position (refer to striver)
    // O(n) O(n)
    public static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> pascalArray = new ArrayList<>();

        for (int i = 0; i < numRows; i++) {
            List<Integer> tempArray = new ArrayList<>();

            if (i == 0) {
                tempArray.add(1);
                pascalArray.add(tempArray);
                continue;
            }

            if (i == 1) {
                tempArray.add(1);
                tempArray.add(1);
                pascalArray.add(tempArray);
                continue;
            }

            tempArray.add(1);
            for (int j = 1; j < i; j++) {
                tempArray.add(pascalArray.get(i - 1).get(j - 1) + pascalArray.get(i - 1).get(j));
            }
            tempArray.add(1);

            pascalArray.add(tempArray);
        }

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(pascalArray.get(i).get(j) + " ");
            }
            System.out.println();
        }

        return pascalArray;
    }

    public static void main(String[] args) {
        generate(6);
    }
}
