#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  float t, v;
  printf("Temperature: ");
  scanf("%f", &t);
  printf("Wind velocity: ");
  scanf("%f", &t);

  float wcf = 35.74 + (0.6215 * t) + (0.4275 * t - 35.75) * pow(v, 0.16);

  printf("Wind-Chill Factor: %0.2f", wcf);
}

// #include <math.h>
// #include <stdio.h>

// // Function to calculate wind-chill factor
// double windChillFactor(double temp, double speed) {
//   return 35.74 + 0.6215 * temp - 35.75 * pow(speed, 0.16) +
//          0.4275 * temp * pow(speed, 0.16);
// }

// int main() {
//   double temp, speed, wcf;

//   // Prompt the user to input air temperature and wind speed
//   printf("Enter the air temperature in Fahrenheit: ");
//   scanf("%lf", &temp);
//   printf("Enter the wind speed in miles per hour: ");
//   scanf("%lf", &speed);

//   // Calculate the wind-chill factor
//   wcf = windChillFactor(temp, speed);

//   // Output the wind-chill factor
//   printf("The wind-chill factor is: %.2f Fahrenheit\n", wcf);

//   return 0;
// }
