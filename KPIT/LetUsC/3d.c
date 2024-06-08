// Write a program to find the absolute value of a number entered
// through the keyboard.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  float num;
  printf("Enter any number: ");
  scanf("%f", &num);

  if (num < 0) {
    num *= -1;
    printf("Absolute value: %0.2f", num);
  } else {
    printf("Absolute value: %0.2f", num);
  }
}