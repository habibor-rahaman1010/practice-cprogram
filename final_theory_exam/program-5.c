//Argument Passed But No Return Value

#include <stdio.h>

void add(int a, int b) {

    int sum = a + b;
    printf("%d", sum);
}

int main() {
    int a = 10, b = 15;
    add(a, b);
}

