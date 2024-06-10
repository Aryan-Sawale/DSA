#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
  unordered_map<int, int> umap;
  for (int i = 0; i < nums.size(); i++)
  {
    umap[nums[i]] = i;
  }
  for (int i = 0; i < nums.size(); i++)
  {
    int key = target - nums[i];
    if (umap.find(key) != umap.end())
    {
      if (umap[key] != i)
      {
        return {i, umap[key]};
      }
    }
  }

  return {};
}

int main()
{
  vector<int> nums;
  int n;
  cout << "Enter size: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ele;
    cout << "Enter element " << i + 1 << ": ";
    cin >> ele;
    nums.push_back(ele);
  }

  int target;
  cout << "Enter target: ";
  cin >> target;

  vector<int> result = twoSum(nums, target);
  cout << result[0] << " " << result[1];
}