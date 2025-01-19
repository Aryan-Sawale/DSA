import java.util.*;

class SortColors {

    // There are 3 pointers: low, mid and high
    // 1. arr[0] to arr[low - 1] must only contain 0s
    // 2. arr[low] to arr[mid - 1] must only contain 1s
    // 3. arr[high + 1] to arr[n - 1] must only contain 2s
    // 4. arr[mid] to arr[high] is unsorted
    //
    // 1) Initially low = 0, mid = 0, high = n - 1
    // Traverse till mid <= high [once mid crosses high, the array will sorted]
    // 2) if arr[mid] == 0, swap arr[low] and arr[mid], then low++ and mid++
    // 3) if arr[mid] == 1, mid++
    // 4) if arr[mid] == 2, swap arr[mid] and arr[high], then high--
    public static void dutchNationalFlag(int[] nums) {
        int length = nums.length;

        int low = 0;
        int mid = 0;
        int high = length - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;

                low++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else if (nums[mid] == 2) {
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;

                high--;
            }
        }

        System.out.println(Arrays.toString(nums));
    }

    public static void sortColors(int[] nums) {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;

        int length = nums.length;

        for (int i = 0; i < length; i++) {
            if (nums[i] == 0) {
                zeroCount++;
            }

            if (nums[i] == 1) {
                oneCount++;
            }

            if (nums[i] == 2) {
                twoCount++;
            }

        }

        for (int i = 0; i < zeroCount; i++) {
            nums[i] = 0;
        }

        for (int i = zeroCount; i < zeroCount + oneCount; i++) {
            nums[i] = 1;
        }

        for (int i = zeroCount + oneCount; i < zeroCount + oneCount + twoCount; i++) {
            nums[i] = 2;
        }

        System.out.println(Arrays.toString(nums));

    }

    public static void main(String[] args) {
        int nums[] = { 2, 0, 2, 1, 1, 0 };
        sortColors(nums);
        dutchNationalFlag(nums);
    }
}
