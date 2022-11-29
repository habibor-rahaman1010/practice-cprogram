// pointer in c program

#include <stdio.h>

int main() {
    int x = 11;
    int *p;

    p = &x;
    printf("%p \n", p);
    printf("%d \n", p);

    printf("%p \n", *p);
    printf("%d \n", *p);
return 0;
}
