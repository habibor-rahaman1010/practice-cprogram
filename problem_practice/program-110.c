/*Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N as input and tell if the sum of odd values is even or not.
If the sum of odd values is even print YES otherwise NO.*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        int item = ara[i];
        if(item % 2 != 0){
            sum += item;
        }
    }
    if(sum % 2 == 0){
        printf("YES! \n");
    }
    else{
        printf("NO! \n");
    }

return 0;
}
