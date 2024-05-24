// The length and breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the area
// and perimeter of the rectangle, and the area and circumference of
// the circle.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

int main()
{
  float l, b, r;
  printf("Enter length of rectangle: ");
  scanf("%f", &l);
  printf("Enter breadth of rectangle: ");
  scanf("%f", &b);
  printf("Enter radius of circle: ");
  scanf("%f", &r);

  float r_area, r_peri, c_area, c_circum;
  r_area = l * b;
  r_peri = 2 * (l + b);
  c_area = PI * pow(r, 2);
  c_circum = 2 * PI * r;

  printf("Rectangle Area: %f\n", r_area);
  printf("Rectangle Perimeter: %f\n", r_peri);
  printf("Circle Area: %f\n", c_area);
  printf("Circle Circumfurence: %f\n", c_circum);
}