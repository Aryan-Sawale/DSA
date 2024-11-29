#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100

int main()
{
  int numArray[MAX_SIZE];
  int arrIndex = 0;

  char ch[MAX_SIZE];
  while (1)
  {
    printf("Enter number: ");
    scanf("%s", ch);

    if (*ch >= 48 && *ch <= 57)
    {
      numArray[arrIndex] = atoi(ch);
      arrIndex++;
    }
    else
    {
      break;
    }
  }

  int sumOdd = 0;
  int mulEven = 1;
  for (int i = 0; i < arrIndex; i++)
  {
    if (numArray[i] % 2 == 0)
    {
      mulEven *= numArray[i];
    }
    else
    {
      sumOdd += numArray[i];
    }
    printf("%d ", numArray[i]);
  }
  printf("\n");

  printf("Sum of odd nums: %d\n", sumOdd);
  printf("Multiplication of even nums: %d", mulEven);
}