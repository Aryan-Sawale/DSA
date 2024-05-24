#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

void bubblesort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

bool containsDuplicate(int* nums, int numSize)
{
  bubblesort(nums, numSize);

  for (int i = 1; i < numSize; i++)
  {
    if (nums[i] == nums[i - 1])
    {
      return true;
    }
  }

  return false;
}

int main()
{
  int numSize;
  scanf("%d", &numSize);

  int nums[numSize];

  for (int i = 0; i < numSize; i++)
  {
    // printf("Enter element %d: ", i);
    scanf("%d", &nums[i]);
  }

  printf("Contains Duplicate: %d", containsDuplicate(nums, numSize));
}