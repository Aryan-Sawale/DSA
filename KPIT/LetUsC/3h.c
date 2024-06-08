// Given a point (x, y), write a program to find out if it lies on X-axis, Yaxis
// or origin.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float x, y;
  printf("Enter x-coordinate: ");
  scanf("%f", &x);
  printf("Enter y-coordinate: ");
  scanf("%f", &y);

  if (x == 0 && y == 0) {
    printf("Point lies on origin");
  } else if (y == 0) {
    printf("Point lies on x-axis");
  } else if (x == 0) {
    printf("point lies on y-axis");
  } else {
    printf("Point lies neither on origin, x-axis nor y-axis");
  }
}