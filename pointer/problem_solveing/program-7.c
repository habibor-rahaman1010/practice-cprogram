// three number summation in c program use pointer...

#include <stdio.h>

int main() {
    int x, y, z, sum = 0;
    printf("Enter to the value of: (x, y and z): ");
    scanf("%d %d %d", &x, &y, &z);

    int *p1, *p2, *p3, *ans;

    p1 = &x;
    p2 = &y;
    p3 = &z;
    ans = &sum;

    *ans = *p1 + *p2 + *p3;

    printf("%d \n", *ans);

return 0;
}
