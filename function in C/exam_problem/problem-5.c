// summation in c program use function..

#include <stdio.h>

int add_three_nums(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b;
    printf("Enter the value of (a and b): ");
    scanf("%d %d", &a, &b);

    int result = add_three_nums(a, b, 0);
    printf("Summation is: %d", result);

return 0;
}
