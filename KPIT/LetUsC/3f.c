// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
// check if the three points fall on one straight line.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calcDistance(float x1, float y1, float x2, float y2) {
  float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  return distance;
}

// PQ + QR = PR method
int main() {
  float x1, y1, x2, y2, x3, y3;
  printf("Enter x1: ");
  scanf("%f", &x1);
  printf("Enter y1: ");
  scanf("%f", &y1);
  printf("Enter x2: ");
  scanf("%f", &x2);
  printf("Enter y2: ");
  scanf("%f", &y2);
  printf("Enter x3: ");
  scanf("%f", &x3);
  printf("Enter y3: ");
  scanf("%f", &y3);

  float dis1 = calcDistance(x1, y1, x2, y2);
  float dis2 = calcDistance(x2, y2, x3, y3);
  float dis3 = calcDistance(x1, y1, x3, y3);
  float disArray[] = {dis1, dis2, dis3};

  float max = disArray[0];
  int maxInd = 0;
  for (int i = 1; i < 3; i++) {
    if (max < disArray[i]) {
      max = disArray[i];
      maxInd = i;
    }
  }

  float sum = 0;
  for (int i = 0; i < 3; i++) {
    if (i != maxInd) {
      sum += disArray[i];
    }
  }

  if (sum == disArray[maxInd]) {
    printf("The 3 points lie on the same line");
  } else {
    printf("They don't lie on the same line");
  }
}

// Area of triangle = 0 method;
// #include <stdio.h>

// int areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
//     // Calculate the determinant
//     int determinant = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

//     // If the determinant is 0, the points are collinear
//     return determinant == 0;
// }

// int main() {
//     int x1, y1, x2, y2, x3, y3;

//     // Input coordinates of the three points
//     printf("Enter coordinates of the first point (x1, y1): ");
//     scanf("%d %d", &x1, &y1);

//     printf("Enter coordinates of the second point (x2, y2): ");
//     scanf("%d %d", &x2, &y2);

//     printf("Enter coordinates of the third point (x3, y3): ");
//     scanf("%d %d", &x3, &y3);

//     // Check if the points are collinear
//     if (areCollinear(x1, y1, x2, y2, x3, y3)) {
//         printf("The points (%d, %d), (%d, %d), and (%d, %d) are
//         collinear.\n", x1, y1, x2, y2, x3, y3);
//     } else {
//         printf("The points (%d, %d), (%d, %d), and (%d, %d) are not
//         collinear.\n", x1, y1, x2, y2, x3, y3);
//     }

//     return 0;
// }
