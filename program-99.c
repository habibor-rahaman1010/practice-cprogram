/*Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input. You need to print the values and for every value, you need to print other values than that. See the
samples for more clarification.*/

#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    // enter array input from user...
    printf("Enter the value of array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d - ", ara[i]);
        for(j = 0; j < n; j++){
            if(ara[i] != ara[j]){
                printf("%d ", ara[j]);
            }
        }
        printf("\n");
    }

return 0;
}
