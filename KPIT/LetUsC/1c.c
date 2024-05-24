// Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
// shorter sides. Thus, paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int *calcSize(float l, float b, float new_dims[2]) {
  new_dims[0] = l / 2;
  new_dims[1] = b;
}

int main() {
  float len = 1189, bre = 841;
  float l = len, b = bre;
  float new_dims[2];

  printf("A0 dimensions: %0.2fmm X %0.2fmm \n", len, bre);
  for (int i = 0; i < 8; i++) {
    calcSize(l, b, new_dims);
    l = new_dims[0];
    b = new_dims[1];

    if (l < b) {
      float temp = l;
      l = b;
      b = temp;
    }

    printf("A%d dimensions: %0.2fmm X %0.2fmm \n", i + 1, l, b);
  }
}