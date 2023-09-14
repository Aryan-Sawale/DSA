#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
  int size = nums.size();
  sort(nums.begin(), nums.end());
  vector<vector<int>> result;
  
  for (int i = 0; i < size; i++)
  {
    // remove duplicate triplets due to duplicate elements.
    // start checking from i = 1 to avoid out of bounds
    if (i != 0 && nums[i] == nums[i-1]) continue;

    int twosum = 0 - nums[i];
    int left = i + 1, right = size - 1;
    while (left < right)
    {
      int sum = nums[left] + nums[right];
      if (sum > twosum)
      {
        right--;
      }
      if (sum < twosum)
      {
        left++;
      }
      if (sum == twosum)
      {
        result.push_back({nums[i], nums[left], nums[right]});

        // covering case where there might be duplicates of answer elements
        while (left < right)
        {
          if (nums[right - 1] == nums[right]) 
          {
            right--;
          }
          else 
          {
            right--;
            break;
          }
        }
        
      }
    }
  }

  return result;
}

int main()
{
  vector<int> nums = {0, 0, 0};
  vector<vector<int>> result = threeSum(nums);
  for (auto& it : result)
  {
    for (auto& it2 : it)
    {
      cout << it2 << " ";
    }
    cout<<endl;
  }
}