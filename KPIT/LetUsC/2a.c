// If a five-digit number is input through the keyboard, write a program to
// calculate the sum of its digits. (Hint: Use the modulus operator %)

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int digitSum(int num) {
  int dupli = num;
  int sum = 0;

  while (dupli != 0) {
    int digit = dupli % 10;
    sum += digit;

    dupli /= 10;
  }

  return sum;
}

int main() {
  int num;
  printf("Enter a 5 digit number: ");
  scanf("%d", &num);

  int sum = digitSum(num);
  printf("Sum of digits: %d\n", sum);
}

// #include <stdio.h>

// int main() {
//   int num, digit, sum = 0;

//   printf("Enter a five-digit number: ");
//   scanf("%d", &num);

//   // Extract digits and add them to sum
//   while (num > 0) {
//     digit = num % 10; // Extract the last digit
//     sum += digit;     // Add the last digit to the sum
//     num /= 10;        // Remove the last digit
//   }

//   printf("Sum of digits: %d\n", sum);

//   return 0;
// }
