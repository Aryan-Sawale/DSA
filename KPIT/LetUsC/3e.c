// Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float l, b;
  printf("Enter length: ");
  scanf("%f", &l);
  printf("Enter breadth: ");
  scanf("%f", &b);

  float perimeter = 2 * (l + b);
  float area = l * b;

  if (perimeter < area) {
    printf("Area is greater than perimeter");
  } else {
    printf("Area is not greater than perimeter");
  }
}