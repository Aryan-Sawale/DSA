// According to Gregorian calendar, it was Monday on the date
// 01/01/01. If any year is input through the keyboard write a program
// to find out what is the day on 1st January of this year.

#include <stdio.h>

// Function to check if a year is a leap year
// year that is a multiple of 4, except for years evenly divisible by 100 but
// not by 400.
int isLeapYear(int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0)
        return 1; // leap year
      else
        return 0; // not a leap year
    } else
      return 1; // leap year
  } else
    return 0; // not a leap year
}

// Function to calculate the total number of days from year 1 to the given year
// - 1
int totalDaysFromYear1(int year) {
  int total_days = 0;
  for (int i = 1; i < year; i++) {
    if (isLeapYear(i))
      total_days += 366;
    else
      total_days += 365;
  }
  return total_days;
}

int main() {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  // Calculate the total number of days from year 1 to the given year - 1
  int total_days = totalDaysFromYear1(year);

  // January 1, 0001 was a Monday
  // Calculate the day of the week for January 1 of the given year
  // (total_days + 1) % 7 because we need to include January 1 of year 1
  int day_of_week = (total_days + 1) % 7;

  switch (day_of_week) {
  case 0:
    printf("January 1, %d is a Monday\n", year);
    break;
  case 1:
    printf("January 1, %d is a Tuesday\n", year);
    break;
  case 2:
    printf("January 1, %d is a Wednesday\n", year);
    break;
  case 3:
    printf("January 1, %d is a Thursday\n", year);
    break;
  case 4:
    printf("January 1, %d is a Friday\n", year);
    break;
  case 5:
    printf("January 1, %d is a Saturday\n", year);
    break;
  case 6:
    printf("January 1, %d is a Sunday\n", year);
    break;
  default:
    printf("Error calculating the day of the week\n");
    break;
  }

  return 0;
}
