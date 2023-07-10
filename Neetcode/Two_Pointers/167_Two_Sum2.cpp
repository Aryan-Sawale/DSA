#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
  int size = numbers.size();
  int left = 0, right = size - 1;
  while (left < right)
  {
    int sum = numbers[left] + numbers[right];
    if (sum > target)
    {
      right--;
    }
    if (sum < target)
    {
      left++;
    }
    if (sum == target)
    {
      return {left + 1, right + 1};
    }
  }
} 

int main() 
{
  vector<int> numbers = {2,7,11,15};
  int target = 9;
  vector<int> result = twoSum(numbers, target);
  for (auto& it : result)
  {
    cout << it << " ";
  }
}