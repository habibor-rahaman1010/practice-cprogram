//modulus of a and b number in c program...

#include <stdio.h>

int main() {
    int a, b, result;
    printf("Enter the value a and b: ");
    scanf("%d %d", &a, &b);

    result = a % b;
    printf("Modulus of %d and %d is: %d",a, b, result);

return 0;
}



