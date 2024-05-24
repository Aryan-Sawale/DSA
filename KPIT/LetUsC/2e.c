#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  float angle;

  printf("Enter angle in radians: ");
  scanf("%f", &angle);

  float sine = sin(angle);
  float cosine = cos(angle);
  float tangent = tan(angle);
  float cosec = 1.0 / sine;
  float secant = 1.0 / cosine;
  float cotangent = 1.0 / tangent;

  printf("Sine: %0.2f \nCosine: %0.2f \nTangent: %0.2f \nCosecant: %0.2f "
         "\nSecant: %0.2f \nContangent: %0.2f",
         sine, cosine, tangent, cosec, secant, cotangent);
}

// #include <math.h>
// #include <stdio.h>

// #define PI 3.14159265358979323846

// // Function to convert degrees to radians
// double toRadians(double degree) { return degree * (PI / 180.0); }

// int main() {
//   double angleDegree, angleRadian;

//   // Prompt the user to enter the angle in degrees
//   printf("Enter the angle in degrees: ");
//   scanf("%lf", &angleDegree);

//   // Convert angle from degrees to radians
//   angleRadian = toRadians(angleDegree);

//   // Calculate trigonometric ratios
//   double sine = sin(angleRadian);
//   double cosine = cos(angleRadian);
//   double tangent = tan(angleRadian);
//   double cosecant = 1.0 / sine;
//   double secant = 1.0 / cosine;
//   double cotangent = 1.0 / tangent;

//   // Output the trigonometric ratios
//   printf("Trigonometric ratios for %.2lf degrees:\n", angleDegree);
//   printf("Sine: %.4lf\n", sine);
//   printf("Cosine: %.4lf\n", cosine);
//   printf("Tangent: %.4lf\n", tangent);
//   printf("Cosecant: %.4lf\n", cosecant);
//   printf("Secant: %.4lf\n", secant);
//   printf("Cotangent: %.4lf\n", cotangent);

//   return 0;
// }
