#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPrime(int num) {
  if (num <= 1)
    return false; // Added check for numbers less than 2
  if (num == 2)
    return true; // 2 is a prime number
  if (num % 2 == 0)
    return false; // Exclude even numbers

  // only check odd numbers
  for (int i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

void printPrimeUniqueFactors(int num) {
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      if (isPrime(i)) {
        printf("%d ", i);
      }
    }
  }
}

void printPrimeFactors(int num) {
  if (num <= 1) {
    printf("No prime factors\n");
    return;
  }

  int prime = 2;
  int quotient = num;
  while (quotient > 1) {
    if (quotient % prime == 0) {
      quotient /= prime;
      printf("%d ", prime);
    } else {
      do {
        prime++;
      } while (
          !isPrime(prime)); // actually prime check is not required, because
                            // non-primes will never have quotient % prime == 0
    }
  }
}

int main() {
  int num;
  printf("Enter number: ");
  scanf("%d", &num);

  printPrimeFactors(num);
}