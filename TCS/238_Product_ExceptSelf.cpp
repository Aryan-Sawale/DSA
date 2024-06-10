#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
  vector<int> results;
  int all_product = 1;
  int zero_count = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
      zero_count++;
  }

  if (zero_count > 1)
  {
    return vector<int>(nums.size(), 0);
  }

  if (zero_count == 1)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != 0)
        all_product *= nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != 0)
      {
        results.push_back(0);
      }
      else
      {
        results.push_back(all_product);
      }
    }
  }

  if (zero_count == 0)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      all_product *= nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
      results.push_back(all_product / nums[i]);
    }
  }

  return results;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> result = productExceptSelf(nums);
}