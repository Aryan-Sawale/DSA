#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void convertWeight(float weight, float *gram, float *ton, float *pound) {
  *gram = weight * 1000;
  *ton = weight / 1000;
  *pound = weight * 2.205;
}
int main() {
  float weight, gram, ton, pound;
  printf("Enter weight in KG: ");
  scanf("%f", &weight);

  convertWeight(weight, &gram, &ton, &pound);

  printf("Weight in KG: %0.2f\n", weight);
  printf("Weight in gram: %0.2f\n", gram);
  printf("Weight in ton: %0.2f\n", ton);
  printf("Weight in pound: %0.2f\n", pound);
}