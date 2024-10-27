#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x, y, z;
  printf("x water taps fill y tanks in z mins\n");
  printf("Enter number of taps (x): ");
  scanf("%f", &x);
  printf("Enter number of tanks (y): ");
  scanf("%f", &y);
  printf("Enter minutes required (z): ");
  scanf("%f", &z);

  if (x <= 0 || y <= 0 || z <= 0)
  {
    printf("None of the values can be 0 or negative!");
    return -1;
  }

  float a, b, c, d, e;
  printf("\na taps are turned on for b mins, but c taps took d mins to turn on. Time remaining to fill e tanks: \n");
  printf("Enter number of taps (a): ");
  scanf("%f", &a);
  printf("Enter minutes turned on so far (b): ");
  scanf("%f", &b);
  printf("Enter number of taps which turned on late (c): ");
  scanf("%f", &c);
  printf("Enter minutes after which late taps were turned on (d): ");
  scanf("%f", &d);
  printf("Enter number of tanks to be filled (e): ");
  scanf("%f", &e);

  if (a <= 0 || e <= 0)
  {
    printf("a or e cannot be 0 or negative!");
    return -1;
  }
  if (b < 0 || c < 0 || d < 0)
  {
    printf("b, c and d cannot be negative!");
    return -1;
  }
  if (d > b)
  {
    printf("d cannot be greater than b!");
    return -1;
  }

  float total_tap_mins = (e * x * z) / y;

  float tap_mins_dmins = (a - c) * d;
  float tap_mins_bmins = tap_mins_dmins + (a * (b - d));

  if (total_tap_mins <= tap_mins_dmins)
  {
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after %0.2f mins: %0.2f \n", d, tap_mins_dmins);
    printf("Tanks are already filled!\n");
  }

  else if (total_tap_mins <= tap_mins_bmins)
  {
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after %0.2f mins: %0.2f \n", b, tap_mins_bmins);
    printf("Tanks are already filled!\n");
  }

  else if (total_tap_mins > tap_mins_bmins)
  {
    float remaining_tap_mins = total_tap_mins - (tap_mins_bmins);
    float remaining_time = remaining_tap_mins / 8;

    printf("\nTotal tap mins: %0.2f \n", total_tap_mins);
    printf("Remaining tap mins: %0.2f \n", remaining_tap_mins);
    printf("Ans: %0.2f mins \n", remaining_time);
  }
}