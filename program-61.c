//Write a C program to take one positive integer N as input and print all divisors of N.

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n){
        if(n % i == 0){
            printf("%d ", i);
        }
        i++;
    }


return 0;
}
