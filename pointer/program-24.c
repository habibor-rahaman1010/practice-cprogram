// swapping in c program use pointer....
//it's call pass bye reference in c program..

#include <stdio.h>

void swapping(int *p1, int *p2) {
    int tamp = *p1;
    *p1 = *p2;
    *p2 = tamp;
}

int main() {
    int a = 12, b = 14;
    printf("before a = %d  b = %d \n", a, b);

    int *p1 = &a, *p2 = &b;
    swapping(p1, p2);

    printf("after a = %d  b = %d \n", a, b);

return 0;
}

