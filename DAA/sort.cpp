#include <bits/stdc++.h>

using namespace std;

vector<int> bubble(vector<int> nums)
{
  int size = nums.size();
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (nums[j] > nums[j+1])
      {
        swap(nums[j], nums[j+1]);
      }
    }
  }

  return nums;
}

int main()
{
  vector<int> nums = {100, 72, 75, 22, 0, 29};
  vector<int> result = bubble(nums);
  for (auto& i : result)
  {
    cout << i << " ";
  } 
}