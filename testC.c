#include <stdio.h>
#include <stdlib.h>

void set(int a[], int *n) {
    int i = 0;
    a[(*n)++] = ++i;
    printf("%d %d \n", *n, i);
}

int main() {
    int a = 1;
    int *p = &a;
    int b = 5;
    int *c = (int*)malloc(2 * sizeof(int));
    c = (int[]){a, b};
    int **d = &c;
    int calc = (*d)[*c]++ + (*c)++ + *p;
    printf("%d", *p);
}
// gcc testC.c -o testC
// having int d = (*p)++ + *p, if the post-increment is in the operation like this, it doesn't actually increment. Only pre-increment works