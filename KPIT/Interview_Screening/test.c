// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #include <math.h>



// int main()
// {
//   int a, b;
//   printf("Enter a: ");
//   scanf("%d", &a);

//   printf("Enter b: ");
//   scanf("%d", &b);

//   printf("a: %d\n", a);
//   printf("b: %d\n", b);

//   char* str1 = "behhi";
//   char* str2 = "hkfhkf";

// }

#include <stdio.h>
void solve() {
    char ch[10] = "abcdefghij";
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        ans += (ch[i] - 'a');
        printf("%d ", ch[i]);
    }
    printf("%d", ans);
}
int main() {
    solve();
	return 0;
}