#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h> // tolower

#define MAX_SIZE 100

int main()
{
  char inputString[MAX_SIZE];
  printf("Enter input string: ");
  scanf("%s", &inputString);

  int windowSize;
  printf("Enter length of substring: ");
  scanf("%d", &windowSize);

  char uniqueStrings[MAX_SIZE][MAX_SIZE];
  int freqArray[MAX_SIZE];
  for (int i = 0; i < MAX_SIZE; i++)
  {
    freqArray[i] = 1;
  }
  int arrayIndex = 0;

  int left = 0;

  int stringSize = strlen(inputString);

  while (left <= stringSize - windowSize)
  {
    char substring[windowSize + 1];
    for (int i = 0; i < windowSize; i++)
    {
      substring[i] = inputString[left + i];
    }
    substring[windowSize] = '\0';

    bool isUnique = true;
    for (int i = 0; i < arrayIndex; i++)
    {
      if (!strcmp(uniqueStrings[i], substring))
      {
        isUnique = false;
        freqArray[i]++;
        break;
      }
    }

    if (isUnique)
    {
      for (int i = 0; i <= windowSize; i++)
      {
        uniqueStrings[arrayIndex][i] = substring[i];
      }
      arrayIndex++;
    }
    left++;
  }

  for (int i = 0; i < arrayIndex; i++)
  {
    printf("%s: %d\n", uniqueStrings[i], freqArray[i]);
  }
}