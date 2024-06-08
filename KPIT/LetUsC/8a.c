#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isLeapYear(int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        return true;
      } else {
        return false;
      }
    } else {
      return true;
    }
  } else {
    return false;
  }
}

int main() {
  int year;
  printf("Enter year: ");
  scanf("%d", &year);

  bool isLeap = isLeapYear(year);

  if (isLeap) {
    printf("Leap Year");
  } else {
    printf("Not a leap year");
  }
}