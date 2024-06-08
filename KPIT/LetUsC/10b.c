#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int naturalSumRecursive(int num) {
  int sum = 0;
  if (num > 0) {
    sum = num + naturalSumRecursive(num - 1);
  }
  return sum;
}
int main() { printf("%d", naturalSumRecursive(25)); }