//Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible by M.

#include <stdio.h>

int main() {
    int n, m, i;
    printf("Enter the value of (n and m): ");
    scanf("%d %d", &n, &m);

    i = m;
    while(i <= n){
        printf("%d ", i);
        i += m;
    }

return 0;
}
