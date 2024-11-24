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

// int main()
// {

//     int arr[6] = {1, 2, 3, 4, 5, 6};

//     int* p = (int*)(&arr + 1);
//     // &arr + 1 results in memory location addition of size arr[6].

//     printf("%d, %d", *(arr + 1), *(p - 1));

//     return 0;
// }

#include <stdio.h>

func()
{
    return 7;
}
int main()
{
    printf("%d\n", func());
}
