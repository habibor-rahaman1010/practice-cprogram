//Argument Passed and Returns a Value

#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a = 10, b = 15;
    printf("%d", add(a, b));
}
