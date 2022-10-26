//Write a C program to take one positive integer N as input and print from 1 to N.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d ", i);
    }

return 0;
}

