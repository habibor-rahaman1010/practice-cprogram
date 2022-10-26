//Write a program in C to display n terms of natural number and their sum...

#include <stdio.h>

int main() {
    int i, sum = 0, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d ", i);
        sum += i;
    }
    printf("\n");
    printf("Sum of the first 10 natural numbers is: %d \n", sum);

return 0;
}

