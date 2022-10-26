//Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible by M.

#include <stdio.h>

int main() {
    int n, m, i;
    printf("Enter the value of (n and m): ");
    scanf("%d %d", &n, &m);

    for(i = m; i <= n; i += m){
         printf("%d ", i);
    }

return 0;
}
