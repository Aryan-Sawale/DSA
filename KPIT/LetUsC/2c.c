#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

float toRadians(float deg) { return (deg * PI) / 180; }

int main() {
  float L1, L2, G1, G2;
  printf("Enter co-ordinates of both places\n");
  printf("L1: ");
  scanf("%f", &L1);
  printf("L2: ");
  scanf("%f", &L2);
  printf("G1: ");
  scanf("%f", &G1);
  printf("G2: ");
  scanf("%f", &G2);

  float D = 3963 * acos(sin(toRadians(L1)) * sin(toRadians(L2)) +
                        cos(toRadians(L1)) * cos(toRadians(L2)) *
                            cos(toRadians(G1) - toRadians(G2)));

  printf("Distance in nautical miles: %0.2f", D);
}

// #include <math.h>
// #include <stdio.h>

// #define PI 3.14159265358979323846

// // Function to convert degrees to radians
// double toRadians(double degree) { return degree * (PI / 180.0); }

// int main() {
//   double L1, L2, G1, G2, D;

//   // Prompt the user to enter the coordinates
//   printf("Enter the latitude of the first place (in degrees): ");
//   scanf("%lf", &L1);
//   printf("Enter the longitude of the first place (in degrees): ");
//   scanf("%lf", &G1);
//   printf("Enter the latitude of the second place (in degrees): ");
//   scanf("%lf", &L2);
//   printf("Enter the longitude of the second place (in degrees): ");
//   scanf("%lf", &G2);

//   // Convert all the angles from degrees to radians
//   L1 = toRadians(L1);
//   L2 = toRadians(L2);
//   G1 = toRadians(G1);
//   G2 = toRadians(G2);

//   // Calculate the distance using the given formula
//   D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

//   // Output the distance
//   printf("The distance between the two places is: %.2f nautical miles\n", D);

//   return 0;
// }
