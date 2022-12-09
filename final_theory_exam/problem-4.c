// pass by reference

#include <stdio.h>

void passReference(int *n, int *m) {
    *n = 30, *m = 35;
}

int main() {
    int n = 15, m = 20;

    printf("Before function call: %d %d \n", n, m);

    passReference(&n, &m);

    printf("After function call: %d %d \n", n, m);
}

