//Write a C program to take one positive integer N as input and print from 1 to N.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n){
        printf("%d ", i);
        i++;
    }

return 0;
}
