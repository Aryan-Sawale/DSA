#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void circularShift(int *x, int *y, int *z) {
  int temp = *x;
  *x = *z;
  *z = *y;
  *y = temp;
}

int main() {
  int a, b, c;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  printf("Enter c: ");
  scanf("%d", &c);

  circularShift(&a, &b, &c);
  printf("After Swapping: \n");
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);
}