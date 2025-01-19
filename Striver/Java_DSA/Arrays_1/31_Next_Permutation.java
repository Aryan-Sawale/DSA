import java.util.*;

class NextPermutation {
    public static void reverseArray(int[] nums, int startIndex, int endIndex) {
        int length = (endIndex - startIndex) + 1;
        int midPoint = startIndex + (length / 2) - 1;

        for (int i = startIndex, j = 0; i <= midPoint; i++, j++) {
            int temp = nums[i];
            nums[i] = nums[endIndex - j];
            nums[endIndex - j] = temp;
        }

        return;
    }

    // Find break point (a[i] < a[i + 1])
    // If break point doesn't exist, array is in decreasing order, hence it is the
    // last permuation so just reverse it
    // If break point exists, swap the smallest element greater than a[i] in right
    // half with a[i]
    // After swapping, sort the elements after a[i]. But since we know, after
    // breakpoint elements are in decreasing, so just reversing them will sort it

    public static void nextPermutation(int[] nums) {
        int length = nums.length;

        // find breakpoint
        int index = -1;
        for (int i = length - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        System.out.println("Index: " + index);

        // if break point doesn't exist
        if (index == -1) {
            reverseArray(nums, 0, length - 1);
            for (int i = 0; i < length; i++) {
                System.out.print(nums[i] + " ");
            }
            System.out.println();

            return;
        }

        // if break point exists
        // find smallest element greater than a[i] and swap
        int swapIndex = length - 1;
        for (int i = length - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swapIndex = i;
                int temp = nums[index];
                nums[index] = nums[swapIndex];
                nums[swapIndex] = temp;
                break;
            }
        }

        // reverse the right half
        reverseArray(nums, index + 1, length - 1);

        for (int i = 0; i < length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();

        return;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3 };
        nextPermutation(nums);
    }
}
