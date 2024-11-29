#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define BIT_VALUE(x) (1 << x)

int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d", &num);

  int bitArray[16] = {0};
  int countOnes = 0;
  for (int i = 15; i >= 8; i--)
  {
    int digit = (num & BIT_VALUE(15 - i)) ? 1 : 0;
    bitArray[i] = digit;

    if (digit == 1)
    {
      countOnes++;
    }
  }

  bitArray[7] = (countOnes % 2 == 0) ? 1 : 0;

  for (int i = 0; i < 16; i++)
  {
    printf("%d ", bitArray[i]);
  }
}