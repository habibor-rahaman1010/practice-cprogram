// pointer value replace in c program...

#include <stdio.h>

int main() {
    int a = 12;

    int *p = &a;
    int **q = &p;
    int ***r = &q;

    ***r = 34;

    printf("%d \n", a);

return 0;
}



