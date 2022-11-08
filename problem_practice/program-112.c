/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . And next line will contain k . Now find the k-th biggest element from the array.
*/

#include <stdio.h>

int main() {
    int n, k, i, j, tamp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    printf("Enter the value of array element: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int third = 0;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(ara[j] > ara[i]){
                tamp = ara[i];
                ara[i] = ara[j];
                ara[j] = tamp;
            }
        }
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);
    if(k <= n){
        printf("%d biggest element is: %d", k, ara[k - 1]);
    }


return 0;
}

