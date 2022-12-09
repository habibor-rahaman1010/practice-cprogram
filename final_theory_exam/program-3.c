// pass by value...

#include <stdio.h>

void passValue(int n, int m) {
    n = 30, m = 35;
}

int main() {
    int n = 15, m = 20;

    printf("Before function call: %d %d \n", n, m);

    passValue(n, m);

    printf("After function call: %d %d \n", n, m);
}
