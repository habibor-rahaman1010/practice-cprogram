//Write a C program to take one positive integer N as input and print all divisors of N.

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
       if(n % i == 0){
            printf("%d ", i);
        }
    }

return 0;
}

