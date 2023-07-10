#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{
  int size = nums.size();
  vector<int> results(size, 1);
  
  int prefix = 1;
  for (int i = 0; i < size; i++)
  {
    results[i] = prefix;
    prefix *= nums[i];
  }

  int postfix = 1;
  for (int i = size - 1; i >= 0; i--)
  {
    results[i] *= postfix;
    postfix *= nums[i];
  }

  return results;
}

int main()
{
  vector<int> nums = {-1,1,0,-3,3};
  vector<int> results = productExceptSelf(nums);
  for (int i = 0; i < results.size(); i++)
  {
   cout<<results[i]<<" ";
  }
}



// solution with division 
vector<int> productExceptSelf2(vector<int>& nums) 
{
  int size = nums.size();
  vector<int> results;
  int all_product = 1;
  int zero_count = 0;

  for (int i = 0; i < size; i++)
  {
      if (nums[i] == 0) zero_count++;
  }

  if (zero_count > 1)
  {
      return vector<int> (size, 0);
  }

  if (zero_count == 1)
  {
      for (int i = 0; i < size; i++)
      {
      if (nums[i] != 0) all_product *= nums[i];
      }

      for (int i = 0; i < size; i++)
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
      for (int i = 0; i < size; i++)
      {
      all_product *= nums[i];
      }
      for (int i = 0; i < size; i++)
      {
      results.push_back(all_product / nums[i]);
      }
  }

  return results;
}