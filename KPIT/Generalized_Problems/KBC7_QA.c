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

  printf("\nQ. If x water taps fill y tanks in z mins, how much time does 1 tap require to fill y tanks?\n");
  printf("A. (x * z) minutes.\n\n");

  printf("Q. If 1 tap requires (x * z) mins to fill y tanks, how much time does 1 tap require to fill 1 tank?\n");
  printf("A. (x * z) / y minutes.\n\n");

  printf("Q. If 1 tap requires (x * z) / y mins to fill 1 tank, how much time does 1 tap require to fill %0.2f tanks?\n", e);
  float total_tap_mins = (e * x * z) / y;
  printf("A. %0.2f * (x * z) / y = %0.2f minutes.\n\n", e, total_tap_mins);

  float tap_mins_Dmins = (a - c) * d;
  float tap_mins_Bmins = tap_mins_Dmins + (a * (b - d));

  printf("Q. Since (a - c) taps are running for first d minutes, how many tap minutes are covered?\n");
  printf("A. (a - c) * d = (%0.2f - %0.2f) * %0.2f = %0.2f minutes\n\n", a, c, d, tap_mins_Dmins);

  printf("Q. Since a taps are running after d minutes till b minutes, how many tap minutes are covered till b mins?\n");
  printf("A. tap mins covered in d mins + a * (b - d): \n%0.2f + %0.2f * (%0.2f - %0.2f) = %0.2f minutes\n\n", d, a, b, d, tap_mins_Dmins, a, b, d, tap_mins_Bmins);

  printf("Q. Are the total tap minutes required less than or equal to tap minutes covered in d mins?\n", d);
  if (total_tap_mins <= tap_mins_Dmins)
  {
    printf("Yes!\n");
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after d mins: %0.2f \n", d, tap_mins_Dmins);
    printf("Ans: Tanks are already filled!\n");
    return 0;
  }
  printf("Ans: No\n\n");

  printf("Q. Are the total tap minutes required less than or equal to tap minutes covered in b mins?\n", b);
  if (total_tap_mins <= tap_mins_Bmins)
  {
    printf("Yes!\n");
    printf("Total tap mins: %0.2f \n", total_tap_mins);
    printf("Tap mins after b mins: %0.2f \n", b, tap_mins_Bmins);
    printf("Tanks are already filled!\n");
    return 0;
  }
  printf("Ans: No\n\n");

  if (total_tap_mins > tap_mins_Bmins)
  {
    float remaining_tap_mins = total_tap_mins - (tap_mins_Bmins);
    float remaining_time = remaining_tap_mins / a;

    printf("Q. What are the remaining tap mins?\n");
    printf("A. total tap minutes - tap minutes covered in b mins: \n%0.2f - %0.2f = %0.2f\n\n", b, total_tap_mins, tap_mins_Bmins, remaining_tap_mins);

    printf("Q. What will be the remaining time?\n");
    printf("A. Remaining tap mins / no. of taps: \n%0.2f %/ %0.2f = %0.2f\n\n", remaining_tap_mins, a, remaining_time);
  }
}