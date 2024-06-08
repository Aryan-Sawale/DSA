// Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle,
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// equation of circle: (x-h)^2 + (y-k)^2 = r^2 [(h,k) is center and r is
// radius]; basically distance of any point on circle is r So just use r
int main() {
  float h, k, r, x, y;
  printf("Enter x-coordinate of circle center: ");
  scanf("%f", &h);
  printf("Enter y-coordinate of circle center: ");
  scanf("%f", &k);
  printf("Enter radius of circle: ");
  scanf("%f", &r);
  printf("Enter x-coordinate of point: ");
  scanf("%f", &x);
  printf("Enter y-coordinate of point: ");
  scanf("%f", &y);

  float distance = sqrt(pow((x - h), 2) + pow((y - k), 2));

  if (distance > r) {
    printf("Point lies outside circle");
  } else if (distance == r) {
    printf("Point lies on circle");
  } else {
    printf("Point lies inside circle");
  }
}