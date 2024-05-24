#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int reversedNum(int num) {
  int dupli = num;
  int reversed = 0;
  while (dupli != 0) {
    int digit = dupli % 10;
    reversed = reversed * 10 + digit;

    dupli /= 10;
  }

  return reversed;
}

int main() {
  int num;
  printf("Enter a 5 digit number: ");
  scanf("%d", &num);

  int reversed = reversedNum(num);
  printf("Reversed number: %d\n", reversed);

  (reversed == num) ? printf("Reversed number is equal")
                    : printf("Reversed number is not equal");
}
