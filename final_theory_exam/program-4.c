//No Arguments Passed But Returns a Value

#include <stdio.h>

int add() {
    int a = 10, b = 15;
    int sum = a + b;
    return  sum;
}

int main() {
    printf("%d", add());
}
