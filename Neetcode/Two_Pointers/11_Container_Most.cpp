#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) 
{
  int size = height.size();
  int left = 0, right = size - 1;
  int max_water = -1;
  while (left < right)
  {
    max_water = max(max_water, (min(height[left], height[right]) * (right - left) ) );
    if (height[left] <= height[right]) left++;
    else right--;
  }

  return max_water;
}

int main()
{
  vector<int> height = {1,8,6,2,5,4,8,3,7};
  cout << maxArea(height);
}