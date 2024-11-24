/*
  Given an array of numbers and a result array.
  For each element, check if the number is a palindrome:
  1) If it is, result[i] = 0;
  2) If it isn't sum its digits and check again while keeping count:
    a) if number of transformations is <= 100, result[i] = count
    b) if number of transformations is > 100, result[i] = -1

  Constraints: max number of digits = 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MAX_DIGITS 5

bool isPalindrome(int num)
{
  int digitArray[MAX_DIGITS] = {0};
  int count = 0;
  while (num)
  {
    digitArray[count] = num % 10;
    count++;
    num /= 10;
  }

  int left = 0;
  int right = count - 1;

  while (left < right)
  {
    if (digitArray[left] != digitArray[right])
    {
      return false;
    }

    left++;
    right--;
  }

  return true;
}

int sumOfDigits(int num)
{
  int sum = 0;

  while (num)
  {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}

void transformToPalindrome(int arr[], int size)
{
  int result[size];
  for (int i = 0; i < size; i++)
  {
    if (isPalindrome(arr[i]))
    {
      result[i] = 0;
    }
    else
    {
      int count = 0;
      while (!isPalindrome(arr[i]))
      {
        arr[i] = sumOfDigits(arr[i]);
        count++;
      }

      if (count <= 100)
      {
        result[i] = count;
      }
      else
      {
        result[i] = -1;
      }
    }
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d ", result[i]);
  }
}

int main()
{
  int size;
  printf("Enter number of elements: ");
  scanf("%d", &size);

  int arr[size];
  for (int i = 0; i < size; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  transformToPalindrome(arr, size);
}