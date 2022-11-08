/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . Now count the number of prime numbers from this array and print them.
In the sample output the first line will contain count of prime numbers and second line will contain the prime
numbers.
*/

#include <stdio.h>

int main() {
    int i, j, n, count;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        count = 0;
        for(j = 0; j < n; j++){
            if(ara[j] % ara[i] == 0){
                count++;
            }
        }

    }

    printf("%d", count);

return 0;
}

