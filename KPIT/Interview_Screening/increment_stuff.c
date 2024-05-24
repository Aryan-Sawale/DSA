// #include <stdio.h>
// #include <stdlib.h>

// void set(int a[], int *n) {
//     int i = 0;
//     a[(*n)++] = ++i;
//     printf("%d %d \n", *n, i);
// }

// int main() {
//     int a = 1;
//     int *p = &a;
//     int b = 5;
//     int *c = (int*)malloc(2 * sizeof(int));
//     c = (int[]){a, b};
//     int **d = &c;
//     int calc = (*d)[*c]++ + (*c)++ + *p;
//     printf("%d", calc);

//     int kek = (*p)++ + *p;
//     printf("\n%d", kek);
// }
// gcc testC.c -o testC
// having int kek = (*p)++ + *p; if the post-increment is in the operation like this, it adds first and the value is incremented after. In this e.g
// it would be 1 + 2;

// #include <stdio.h>
// void solve() {
//     int a = 3;
//     int res = a++ + ++a + a++ + ++a;
//     printf("%d", res);
// }
// int main() {
// 	solve();
// 	return 0;
// }

// behaves exactly as you would think (3 + 5 + 5 + 7)