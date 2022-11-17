//bit wise not operation in c program..

#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    int c = ~a;
    printf("%d bit wise not is: %d", a, c);

return 0;
}

