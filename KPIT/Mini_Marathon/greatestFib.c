#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int greatestFib(int num)
{
  if (num <= 1)
  {
    return num;
  }

  int currentFib = 0;
  int prev = 1;
  int curr = 1;
  while (currentFib <= num)
  {
    currentFib = curr + prev;
    prev = curr;
    curr = currentFib;
  }

  return prev;
}

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num < 0)
  {
    printf("Negative numbers not allowed\n");
    exit(1);
  }

  int result = greatestFib(num);
  printf("Greatest fibonacci number before %d is %d", num, result);
}