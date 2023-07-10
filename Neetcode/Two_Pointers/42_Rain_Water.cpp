#include <bits/stdc++.h>

using namespace std;

int trap(vector<int>& height) 
{
  int size = height.size();
  int left = 0, right = size - 1;
  int max_left = height[0], max_right = height[size - 1]; 
  // At position 0 and last, they aren't exactly max_left or max_right but it doesn't matter cuz the answer would be 0 anyway (max - current). And we aren't stopping at those indices anyway.
  int water = 0;
  while (left < right)
  {
    // water at current position = (min(max_left, max_right) - height[current])
    // if max_left is bottleneck
    if (max_left <= max_right)
    {
      left++;
      // positive = can hold water, less than 0 = can't hold water
      if ((max_left - height[left]) > 0)
      {
        water += (max_left - height[left]);
      }
      max_left = max(max_left, height[left]);
    }

    // if max_right is bottleneck
    if (max_right < max_left)
    {
      right--;
      if ((max_right - height[right]) > 0)
      {
        water += (max_right - height[right]);
      }
      max_right = max(max_right, height[right]);
    }

  }

  return water;
}
// O(n) and O(1)

int main()
{
  vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
  cout << trap(height);
}

// My solution, didn't pass all testcases because of edge cases
int trap2(vector<int>& height) 
{
  int water = 0;
  int size = height.size();
  for (int i = 1; i < size - 1; i++)
  {
    // if left < current < right
    if (height[i-1] > height[i] && height[i] < height[i+1])
    {
      water += (min(height[i-1], height[i+1]) - height[i]);
    }

    // if left is bigger but right is smaller
    if (height[i-1] > height[i] && height[i] > height[i+1])
    {
      int right = i;
      bool skip = false;
      while (height[right] <= height[i])
      {
        right++;
        // if we reach end of map and still no bigger right
        if (right == size - 1 && height[right] <= height[i])
        {
          skip = true;
          break;
        }
      }
      if (!skip)
      {
        // fill the layer between
        water += ((min(height[i-1], height[right]) - height[i]) * (right - i));
      }
    }

    // if right is bigger but left is smaller
    if (height[i+1] > height[i] && height[i] > height[i-1])
    {
      int left = i;
      bool skip = false;
      while (height[left] <= height[i])
      {
        left--;
        // if we reach end of map and still no bigger right
        if (left == 0 && height[left] <= height[i])
        {
          skip = true;
          break;
        }
      }
      if (!skip)
      {
        // edge case where adjacent of bigger left == current. That layer would already be filled.
        if (height[left+1] != height[i])
        {
          // fill the layer between
          water += ((min(height[i+1], height[left]) - height[i]) * (i - left));
        }
      }
    }

    // if both sides are smaller, find left and right peaks then fill layer
    if (height[i-1] < height[i] && height[i] > height[i+1])
    {
      int left = i, right = i;
      bool skip = false;
      while (height[right] <= height[i])
      {
        right++;
        // if we reach end of map and still no bigger right
        if (right == size - 1 && height[right] <= height[i])
        {
          skip = true;
          break;
        }
      }
      while (height[left] <= height[i])
      {
        left--;
        // if we reach end of map and still no bigger right
        if (left == 0 && height[left] <= height[i])
        {
          skip = true;
          break;
        }

        // edge case where there is another bar with same height on the left. That layer would already be filled.
        if (height[left] == height[i])
        {
          skip = true;
          break;
        }
      }
      if (!skip)
      {
        // fill the layer between
        water += (min(height[left], height[right]) - height[i]) * (right - left - 1);
      }
    }

  }

  return water;
}