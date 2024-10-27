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

  printf("\n8 taps are turned on for 8 mins, but 2 taps took 2 mins to turn on. Time remaining to fill 32 tanks: \n\n");

  float total_tap_mins = (32 * x * z) / y;

  float tap_mins_2mins = 6 * 2;
  float tap_mins_8mins = tap_mins_2mins + (8 * 6);

  if (total_tap_mins <= tap_mins_2mins)
  {
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after 2 mins: %0.2f \n", tap_mins_2mins);
    printf("Tanks are already filled!\n");
  }

  else if (total_tap_mins <= tap_mins_8mins)
  {
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after 8 mins: %0.2f \n", tap_mins_8mins);
    printf("Tanks are already filled!\n");
  }

  else if (total_tap_mins > tap_mins_8mins)
  {
    float remaining_tap_mins = total_tap_mins - (tap_mins_8mins);
    float remaining_time = remaining_tap_mins / 8;

    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Remaining tap mins: %0.2f \n", remaining_tap_mins);
    printf("Ans: %0.2f mins \n", remaining_time);
  }
}