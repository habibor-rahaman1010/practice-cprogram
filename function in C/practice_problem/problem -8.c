//Write a C program to take one positive integer N as input and print all divisors of N.

#include <stdio.h>

void divisor(int n) {
    int i;
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    divisor(n);

return 0;
}
