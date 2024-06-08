#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 5;
  int arr[n], *p;
  p = arr;
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", (p + i));
  }

  int min = 0;
  for (int i = 0; i < n; i++) {
    printf("%d ", *(p + i));
  }
}