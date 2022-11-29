// pointer to pointer value replace in c program...

#include <stdio.h>

int main() {
    int a = 12;

    int *p = &a;
    int **q = &p;

    **q = 24;

    printf("%d \n", a);

return 0;
}


