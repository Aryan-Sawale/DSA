#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 5;
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int pos = 0, neg = 0, odd = 0, even = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] >= 0) {
      pos++;
    }
    if (arr[i] < 0) {
      neg++;
    }
    if (arr[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  printf("Positive: %d\n", pos);
  printf("Negative: %d\n", neg);
  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
}