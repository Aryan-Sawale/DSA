#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h> // tolower

#define MAX_SIZE 100

typedef struct employee
{
  char name[MAX_SIZE];
  char ID[MAX_SIZE];
  char number[MAX_SIZE];
} employee;

void sortByName(employee employeeArray[], int num)
{
  for (int i = 0; i < num - 1; i++)
  {
    for (int j = 0; j < num - i - 1; j++)
    {
      if (strcmp(employeeArray[j].name, employeeArray[j + 1].name) > 0)
      {
        employee tempEmp = employeeArray[j];
        employeeArray[j] = employeeArray[j + 1];
        employeeArray[j + 1] = tempEmp;
      }
    }
  }
}

void sortByID(employee employeeArray[], int num)
{
  for (int i = 0; i < num - 1; i++)
  {
    for (int j = 0; j < num - i - 1; j++)
    {
      if (strcmp(employeeArray[j].ID, employeeArray[j + 1].ID) > 0)
      {
        employee tempEmp = employeeArray[j];
        employeeArray[j] = employeeArray[j + 1];
        employeeArray[j + 1] = tempEmp;
      }
    }
  }
}

void sortBynumber(employee employeeArray[], int num)
{
  for (int i = 0; i < num - 1; i++)
  {
    for (int j = 0; j < num - i - 1; j++)
    {
      if (strcmp(employeeArray[j].number, employeeArray[j + 1].number) > 0)
      {
        employee tempEmp = employeeArray[j];
        employeeArray[j] = employeeArray[j + 1];
        employeeArray[j + 1] = tempEmp;
      }
    }
  }
}

int main()
{
  int num;
  printf("Enter number of employees: ");
  scanf("%d", &num);

  employee employeeArray[num];
  for (int i = 0; i < num; i++)
  {
    printf("Enter name %d: ", i + 1);
    scanf("%s", &employeeArray[i].name);
    printf("Enter ID %d: ", i + 1);
    scanf("%s", &employeeArray[i].ID);
    printf("Enter phone number %d: ", i + 1);
    scanf("%s", &employeeArray[i].number);
  }

  for (int i = 0; i < num; i++)
  {
    printf("%s %s %s\n", employeeArray[i].name, employeeArray[i].ID, employeeArray[i].number);
  }

  FILE *fp1 = fopen("employees.txt", "w");

  for (int i = 0; i < num; i++)
  {
    fprintf(fp1, "%s %s %s\n", employeeArray[i].name, employeeArray[i].ID, employeeArray[i].number);
  }

  fclose(fp1);

  int optionNumber;
  printf("\nSort option:\n1: name, 2: ID, 3: phone number\nEnter option number: ");
  scanf("%d", &optionNumber);

  if (optionNumber == 1)
  {
    sortByName(employeeArray, num);
  }
  else if (optionNumber == 2)
  {
    sortByID(employeeArray, num);
  }
  else if (optionNumber == 3)
  {
    sortBynumber(employeeArray, num);
  }

  printf("\nSorted: \n");
  for (int i = 0; i < num; i++)
  {
    printf("%s %s %s\n", employeeArray[i].name, employeeArray[i].ID, employeeArray[i].number);
  }

  FILE *fp2 = fopen("employeesSorted.txt", "w");

  for (int i = 0; i < num; i++)
  {
    fprintf(fp2, "%s %s %s\n", employeeArray[i].name, employeeArray[i].ID, employeeArray[i].number);
  }

  fclose(fp2);
}