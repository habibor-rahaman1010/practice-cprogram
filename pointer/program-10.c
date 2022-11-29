// pointer in c program...

#include <stdio.h>

int main() {
    int a = 12;
    char ch = 'H';
    long long int b = 227823;
    double c = 14.56;

    int *x = &a;
    char *y = &ch;
    long long int *z = &b;
    double *n = &c;

    printf("%p \n", x);
    printf("%p \n", y);
    printf("%p \n", z);
    printf("%p \n", n);

    printf("\n");

    printf("%d \n", *x);
    printf("%c \n", *y);
    printf("%lld \n", *z);
    printf("%lf \n", *n);

return 0;
}
