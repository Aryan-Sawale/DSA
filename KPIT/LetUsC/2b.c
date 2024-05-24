#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main() {
  float x, y;
  printf("Enter Cartesian co-ordinates\n");
  printf("x: ");
  scanf("%f", &x);
  printf("y: ");
  scanf("%f", &y);

  float r = sqrt(pow(x, 2) + pow(y, 2));
  float phi = atan(y / x);

  printf("Polar co-ordinates\n r = %0.2f \n phi = %0.2f", r, phi);
}

// int main() {
//   double x, y, r, phi;

//   // Prompt the user to enter Cartesian coordinates
//   printf("Enter the Cartesian coordinates (x y): ");
//   scanf("%lf %lf", &x, &y);

//   // Calculate r
//   r = sqrt(x * x + y * y);

//   // Calculate φ (in radians)
//   phi = atan2(y, x);

//   // Print the polar coordinates
//   printf("Polar coordinates (r, φ):\n");
//   printf("r = %.2lf\n", r);
//   printf("φ = %.2lf radians\n", phi);

//   return 0;
// }
