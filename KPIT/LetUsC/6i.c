#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 4;

  int counter = 0;
  for (int i = 1; i <= 4; i++) {
    // initial spaces
    for (int j = 0; j < n - i; j++) {
      printf("  ");
    }

    for (int j = 0; j < i; j++) {
      counter++;
      printf("%d", counter);
      printf("   ");
    }
    printf("\n");
  }
}