// pointer value replace in c program...

#include <stdio.h>

int main() {
    int a = 12;

    int *p;
    p = &a;

    *p = 14;

    printf("%d \n", a);

return 0;
}
