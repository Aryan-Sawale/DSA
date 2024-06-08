#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 5;
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i);
    scanf("%d", &arr[i]);
  }

  bool palindrome = true;

  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[n - i - 1]) {
      palindrome = false;
    }
  }

  if (palindrome) {
    printf("Array is a palindrome");
  } else {
    printf("Array is not a palindrome");
  }
}