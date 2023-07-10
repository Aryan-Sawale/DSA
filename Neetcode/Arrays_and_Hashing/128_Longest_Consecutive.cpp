#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) 
{
  if (nums.size() == 0) return 0;

  unordered_set<int> uset(nums.begin(), nums.end());
  int max_length = 1;
  for (auto& it : uset)
  {
    // only elements which are the least of their sequence set
    if (uset.find(it-1) == uset.end())
    {
      int length = 1;
      int start = it;
      // till end of sequence is reached
      while (uset.find(start + 1) != uset.end())
      {
        length++;
        max_length = max(max_length, length);
        start++;
      }
    }
  }

  return max_length;
}

int main()
{
  vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
  cout << longestConsecutive(nums);
}

// O(nlogn)
int longestConsecutive2(vector<int>& nums) 
{
  if (nums.size() == 0) return 0;

  set<int> s(nums.begin(), nums.end());

  vector<int> sorted(s.begin(), s.end());

  int size = sorted.size();
  int length = 1;
  int max_len = 1;

  for (int i = 1; i < size; i++)
  {
    if (sorted[i] == sorted[i-1] + 1)
    {
      length++;
    }
    else
    {
      max_len = max(max_len, length);
      length = 1;
    }
  }

  // capture the last sequence set
  max_len = max(max_len, length);

  return max_len;
}
