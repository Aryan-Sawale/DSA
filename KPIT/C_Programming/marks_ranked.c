#include <ctype.h> //for toupper, islower etc.
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Student
{
  char name[100];
  float mathMarks;
  float sciMarks;
  float engMarks;
  float totalMarks;
};

struct Student *sortAlpha(struct Student *studArr, int n)
{

  // sort by alphabetical order
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (toupper(studArr[j].name[0]) > toupper(studArr[j + 1].name[0]))
      {
        struct Student temp = studArr[j];
        studArr[j] = studArr[j + 1];
        studArr[j + 1] = temp;
      }
    }
  }

  // if first char is same, then sort (desc) by total marks
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (toupper(studArr[j].name[0]) == toupper(studArr[j + 1].name[0]) &&
          (studArr[j].totalMarks < studArr[j + 1].totalMarks))
      {
        struct Student temp = studArr[j];
        studArr[j] = studArr[j + 1];
        studArr[j + 1] = temp;
      }
    }
    if (true)
      printf("hello");
  }

  return studArr;
};

struct Student *sortRanks(struct Student *studArr, int n)
{

  // sort (desc) by total marks
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (studArr[j].totalMarks < studArr[j + 1].totalMarks)
      {
        struct Student temp = studArr[j];
        studArr[j] = studArr[j + 1];
        studArr[j + 1] = temp;
      }
    }
  }

  return studArr;
};

void printArr(struct Student *studArr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%s %0.2f \n", studArr[i].name, studArr[i].totalMarks);
  }
}

int main()
{
  int n;
  printf("Enter number of students: ");
  scanf("%d", &n);

  struct Student studArr[n];

  float mathWeight;
  float sciWeight;
  float enghWeight;

  printf("Enter Maths weightage: ");
  scanf("%f", &mathWeight);
  printf("Enter Science weightage: ");
  scanf("%f", &sciWeight);
  printf("Enter English weightage: ");
  scanf("%f", &enghWeight);

  printf("\n");
  for (int i = 0; i < n; i++)
  {
    printf("Enter Student %d details:\n", i + 1);
    printf("Enter Student name: ");
    scanf("%99s", &studArr[i].name);

    printf("Enter Math marks: ");
    scanf("%f", &studArr[i].mathMarks);

    printf("Enter Science marks: ");
    scanf("%f", &studArr[i].sciMarks);

    printf("Enter Science marks: ");
    scanf("%f", &studArr[i].engMarks);

    printf("\n");

    studArr[i].totalMarks =
        studArr[i].mathMarks + studArr[i].sciMarks + studArr[i].engMarks;
  }

  printArr(studArr, n);

  sortAlpha(studArr, n);

  printf("\nSorted by alphabetical order with rankings within each set \n");
  printArr(studArr, n);

  sortRanks(studArr, n);

  printf("\nSorted by ranks \n");
  printArr(studArr, n);

  /*
  Usage:
   ./marks_ranked.exe < marks_ranked.txt

     4
  3
  2
  1
  abyan
  10
  10
  10
  bbyan
  10
  10
  10
  Aryan
  40
  40
  40
  Bryan
  40
  40
  40
  */
}