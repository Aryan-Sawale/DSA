// Temperature of a city in Fahrenheit degrees is input through the
// keyboard. Write a program to convert this temperature into
// Centigrade degrees
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float f;
  printf("Enter temperature in fahrenheit: ");
  scanf("%f", &f);
  float c = (5.0 / 9.0) * (f - 32);
  printf("Temperature in celsius: %f", c);

  // float kek =  (float)5 / 9;
  // printf("\nbruh: %f", kek);
}