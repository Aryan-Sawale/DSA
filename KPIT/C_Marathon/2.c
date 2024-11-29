#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d", &num);

  int digitArray[5];
  for (int i = 4; i >= 0; i--)
  {
    digitArray[i] = num % 10;
    num /= 10;
  }

  // First 2 digits
  if (digitArray[0] == 1)
  {
    // Special case for teens
    printf("%s ", teens[digitArray[1]]);
  }
  else
  {
    if (digitArray[0] > 1)
    {
      printf("%s ", tens[digitArray[0]]);
    }
    if (digitArray[0] > 0)
    {
      printf("%s ", ones[digitArray[1]]);
    }
  }

  printf("Thousand ");

  // 3rd digit
  if (digitArray[2] > 0)
  {
    printf("%s ", ones[digitArray[2]]);
    printf("Hundred ");
  }

  // Last 2 digits
  if (digitArray[3] == 1)
  {
    // Special case for teens
    printf("%s ", teens[digitArray[4]]);
  }
  else
  {
    if (digitArray[3] > 1)
    {
      printf("%s ", tens[digitArray[3]]);
    }
    if (digitArray[3] > 0)
    {
      printf("%s ", ones[digitArray[4]]);
    }
  }
}