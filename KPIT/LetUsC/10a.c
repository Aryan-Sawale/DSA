#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void printBinary(int num) {
  int quotient = num;
  while (quotient > 0) {
    printf("%d", quotient % 2);
    quotient /= 2;
  }
}

void printBinaryRecursive(int num) {
  if (num > 0) {
    printf("%d", num % 2);
    printBinaryRecursive(num / 2);
  }
}

int main() {
  int num;
  printf("Enter num: ");
  scanf("%d", &num);

  // will be printed in reverse;
  printBinary(num);
  printf("\n");
  printBinaryRecursive(num);
}