import java.util.*;

class TwoSum
{
    public static int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
        int length = nums.length;
        for (int i = 0; i < length; i++)
        {
            hmap.put(nums[i], i);
        }
    
        for (int i = 0; i < length; i++)
        {
            int key = target - nums[i];
            if (hmap.containsKey(key))
            {
                if (hmap.get(key) != i)
                {
                    int[] result = {i, hmap.get(key)};
                    return result;
                }
            }
        }
    
        int[] result = {0, 0};
        return result;
    }

    public static void main(String[] args)
    {
        int[] nums = {2,7,11,15};
        System.out.println(twoSum(nums, 9)[0] + " " + twoSum(nums, 9)[1]);
    }
}