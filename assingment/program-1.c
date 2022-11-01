#include <stdio.h>

int main() {
    int a = 5, b = 13, tamp;

    tamp = b;
    b = a;
    a = tamp;
    printf("%d and %d", a, b);

return 0;
}
