import java.util.*;

class MaximumSubarray {
    // traverse the array
    // update maxSum with currentSum if currentSum is greater
    // if currentSum becomes negative, update maxSum if required and reset
    // currentSum (effectively setting subarray startIndex to next position)
    // (This is because, once currentSum of the current subarray becomes negative it
    // will always reduce the sum of any new elements that are added)
    // (We can safely ignore any subarrays formed by startIndex on any element in
    // the negative subarray as it will always become negative, you can check with
    // examples)
    // O(n) O(1)
    public static int maxSubArray(int[] nums) {
        int length = nums.length;
        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;

        for (int i = 0; i < length; i++) {
            currentSum += nums[i];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }

            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;

    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, -4, 4, 2, -3, 5 };
        System.out.println(maxSubArray(nums));
    }
}
