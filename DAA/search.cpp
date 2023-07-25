#include <bits/stdc++.h>

using namespace std;

void search(vector<int> nums,int val)
{
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == val)
    {
      cout << val << " found at position " << i;
      return;
    }
  }
  cout << "not found";
}

int main()
{
  vector<int> nums = {0, 20, 3, 5, 6, 3};
  int val = 3;
  search(nums, val);
}