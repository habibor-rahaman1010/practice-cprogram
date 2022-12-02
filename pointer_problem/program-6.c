/*
You have given positive integer N, the size of an array as input. Take an array of size N as input. Now your task to
print this array. Implement this by using pointers.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i;
    int ara[n];
    int *p1 = ara;

    for(i = 0; i < n; i++){
        scanf("%d", (p1 + i));
    }

    for(i = 0; i < n; i++){
        printf("%d ", *(p1 + i));
    }

return 0;
}
