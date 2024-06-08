
/*
https:// www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
1. Shift ‘N-1’ disks from ‘A’ to ‘B’, using C.
2. Shift last disk from ‘A’ to ‘C’.
3. Shift ‘N-1’ disks from ‘B’ to ‘C’, using A.
*/

#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
  if (n == 0) {
    return;
  }

  towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
  printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
  towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
  int N = 4; // Number of disks

  // A, B and C are names of rods
  towerOfHanoi(N, 'A', 'C', 'B');

  return 0;
}
