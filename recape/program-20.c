//bit wise right shift operator in c program..

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    b = a >> 1;

    printf("%d bit wise left shift is: %d", a, b);

return 0;
}
