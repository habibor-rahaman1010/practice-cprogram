// pointer value replace in c program...

#include <stdio.h>

int main() {
    int a = 12;

    int *p = &a;
    int **q = &p;
    int ***r = &q;
    int ****n = &r;
    int *****m = &n;
    int ******x = &m;

    ******x = 64;

    printf("%d \n", a);

return 0;
}

