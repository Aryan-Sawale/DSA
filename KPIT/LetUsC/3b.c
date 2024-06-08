#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int R, S, A;
  printf("Enter Ram's Age: ");
  scanf("%d", &R);
  printf("Enter Shyam's Age: ");
  scanf("%d", &S);
  printf("Enter Ajay's Age: ");
  scanf("%d", &A);

  if (R < S) {
    if (R < A) {
      printf("Ram is the youngest");
    } else if (R == A) {
      printf("Ram and Ajay are the youngest");
    } else {
      printf("Ajay is the youngest");
    }
  } else if (R == S) {
    if (R < A) {
      printf("Ram and Shyam the youngest");
    } else if (R == A) {
      printf("Ram, Shyam and Ajay are all the same age");
    } else {
      printf("Ajay is the youngest");
    }
  } else {
    if (S < A) {
      printf("Shyam is the youngest");
    } else if (S == A) {
      printf("Shyam and Ajay are the youngest");
    } else {
      printf("Ajay is the youngest");
    }
  }
}