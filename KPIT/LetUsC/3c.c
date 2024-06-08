// Write a program to check whether a triangle is valid or not, if three
// angles of the triangle are entered through the keyboard. A triangle
// is valid if the sum of all the three angles is equal to 180 degrees.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float A, B, C;
  printf("Enter first angle: ");
  scanf("%f", &A);
  printf("Enter second angle: ");
  scanf("%f", &B);
  printf("Enter third angle: ");
  scanf("%f", &C);

  if (A + B + C == 180) {
    printf("The triangle is valid");
  } else {
    printf("The triangle is not valid");
  }
}