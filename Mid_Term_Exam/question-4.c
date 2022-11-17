#include <stdio.h>

int main() {
char a[10];
    a[0] = 98;
    a[1] = 97;
    a[2] = 'n';
    a[3] = 'a';
    a[4] = 'n';
    a[5] = 'a';
    a[6] = '\0';

    printf("%c", a[0]);
    printf("%c", a[1]);
    printf("%c", a[2]);
    printf("%c", a[3]);
    printf("%c", a[4]);
    printf("%c", a[5]);
    printf("%c", a[6]);

return 0;
}
