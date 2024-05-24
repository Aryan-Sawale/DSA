#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  int C, D;
  printf("Enter C: ");
  scanf("%d", &C);
  printf("Enter D: ");
  scanf("%d", &D);

  int temp;
  temp = C;
  C = D;
  D = temp;

  printf("C: %d \nD: %d", C, D);
}

// #include <stdio.h>

// int main() {
//   int C, D, temp;

//   // Prompt the user to input two numbers
//   printf("Enter the value of C: ");
//   scanf("%d", &C);
//   printf("Enter the value of D: ");
//   scanf("%d", &D);

//   // Interchange the contents of C and D using a temporary variable
//   temp = C;
//   C = D;
//   D = temp;

//   // Output the interchanged values
//   printf("After interchanging:\n");
//   printf("Value of C: %d\n", C);
//   printf("Value of D: %d\n", D);

//   return 0;
// }
