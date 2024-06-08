#include <math.h>
#include <stdio.h>


// Function to compute the distance between two points
double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to compute the area of a triangle using Heron's formula
double triangle_area(double a, double b, double c) {
  double s = (a + b + c) / 2; // Semi-perimeter
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to check if a point lies inside a triangle (using Barycentric
// Coordinates)
int point_in_triangle(double x1, double y1, double x2, double y2, double x3,
                      double y3, double x, double y) {
  double area_abc =
      triangle_area(distance(x1, y1, x2, y2), distance(x2, y2, x3, y3),
                    distance(x3, y3, x1, y1));

  // Calculate area of sub-triangles formed by connecting point P to each vertex
  double area_pbc = triangle_area(
      distance(x, y, x2, y2), distance(x2, y2, x3, y3), distance(x3, y3, x, y));
  double area_pac = triangle_area(
      distance(x, y, x1, y1), distance(x1, y1, x3, y3), distance(x3, y3, x, y));
  double area_pba = triangle_area(
      distance(x, y, x1, y1), distance(x1, y1, x2, y2), distance(x2, y2, x, y));

  // Check if sum of sub-triangle areas equals main triangle area (within a
  // tolerance)
  return (fabs(area_pbc + area_pac + area_pba - area_abc) < 1e-6);
}

int main() {
  // Example usage
  double x1, y1, x2, y2, x3, y3, x, y;

  printf("Enter coordinates of triangle vertices A(x1, y1), B(x2, y2), C(x3, "
         "y3): ");
  scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

  printf("Enter coordinates of point P(x, y): ");
  scanf("%lf %lf", &x, &y);

  int is_inside = point_in_triangle(x1, y1, x2, y2, x3, y3, x, y);

  if (is_inside) {
    printf("Point P lies inside the triangle.\n");
  } else {
    printf("Point P lies outside the triangle.\n");
  }

  return 0;
}
