//sum in c program use function...

#include <stdio.h>

void sum() {
    int a, b;
    printf("Enter value of (a and b): ");
    scanf("%d %d", &a, &b);
    printf("%d \n", (a + b));
}

int main() {
    int i, t;
    printf("Enter the value of test case: ");
    scanf("%d", &t);

    for(i = 0; i < t; i++){
        sum();
    }
return 0;
}
