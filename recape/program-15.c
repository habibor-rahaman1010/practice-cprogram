//bit wise and operation in c program..

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the value of (a and b): ");
    scanf("%d %d", &a, &b);

    int c = a & b;
    printf("%d and %d bit wise and is: %d", a, b, c);

return 0;
}
