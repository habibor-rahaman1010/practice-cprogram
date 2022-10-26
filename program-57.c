//Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 2;
    while(i <= n){
        printf("%d ", i);
        i += 2;
    }

return 0;
}
