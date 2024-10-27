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

  printf("Q. If x water taps fill y tanks in z mins, how much time does 1 tap require to fill y tanks?\n");
  printf("A. (x * z) minutes.\n\n");

  printf("Q. If 1 tap requires (x * z) mins to fill y tanks, how much time does 1 tap require to fill 1 tank?\n");
  printf("A. (x * z) / y minutes.\n\n");

  printf("Q. If 1 tap requires (x * z) / y mins to fill 1 tank, how much time does 1 tap require to fill 32 tanks?\n");
  float total_tap_mins = (32 * x * z) / y;
  printf("A. 32 * (x * z) / y = %0.2f minutes.\n\n", total_tap_mins);

  float tap_mins_2mins = 6 * 2;
  float tap_mins_8mins = tap_mins_2mins + (8 * 6);

  printf("Q. Since (8 - 2) taps are running for first 2 minutes, how many tap minutes are covered?\n");
  printf("A. (8 - 2) * 2 = %0.2f minutes\n\n", tap_mins_2mins);

  printf("Q. Since 8 taps are running after 2 minutes till 8 minutes, how many tap minutes are covered till 8 mins?\n");
  printf("A. tap mins covered in 2 mins + 8 * (8 - 2) = %0.2f minutes\n\n", tap_mins_8mins);

  printf("Q. Are the total tap minutes required less than or equal to tap minutes covered in 2 mins?\n");
  if (total_tap_mins <= tap_mins_2mins)
  {
    printf("Yes!\n");
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after 2 mins: %0.2f \n", tap_mins_2mins);
    printf("Ans: Tanks are already filled!\n");
    return 0;
  }
  printf("Ans: No\n\n");

  printf("Q. Are the total tap minutes required less than or equal to tap minutes covered in 8 mins?\n");
  if (total_tap_mins <= tap_mins_8mins)
  {
    printf("Yes!\n");
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after 8 mins: %0.2f \n", tap_mins_8mins);
    printf("Tanks are already filled!\n");
    return 0;
  }
  printf("Ans: No\n\n");

  if (total_tap_mins > tap_mins_8mins)
  {
    float remaining_tap_mins = total_tap_mins - (tap_mins_8mins);
    float remaining_time = remaining_tap_mins / 8;

    printf("Q. What are the remaining tap mins?\n");
    printf("A. total tap minutes - tap minutes covered in 8 mins: \n%0.2f - %0.2f = %0.2f\n\n", total_tap_mins, tap_mins_8mins, remaining_tap_mins);

    printf("Q. What will be the remaining time?\n");
    printf("A. Remaining tap mins / no. of taps: \n%0.2f %/ %0.2f = %0.2f\n\n", remaining_tap_mins, 8.00, remaining_time);
  }
}