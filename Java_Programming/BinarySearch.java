import java.io.*;
import java.util.*;

public class BinarySearch {
  /*
   * static keyword in Java means that the method belongs to the class rather than
   * to any specific instance of the class.
   * Otherwise would have to do this:
   * BinarySearch bs = new BinarySearch();
   * int result = bs.binarySearch(arr, target);
   */
  public static int binarySearch(int[] arr, int target) {
    int left = 0, right = arr.length - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (arr[mid] == target)
        return mid;
      else if (arr[mid] < target)
        left = mid + 1;
      else
        right = mid - 1;
    }
    return -1; // Not found
  }

  public static void main(String[] args) {
    int[] arr = { 2, 3, 4, 10, 40 };
    int target = 10;
    int result = binarySearch(arr, target);
    if (result != -1)
      System.out.println("Element found at index " + result);
    else
      System.out.println("Element not found");
  }
}
