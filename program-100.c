/*
Write a C program to take one positive integer N, the size of an array of unique values as input. Then take an
integer array of size N as input. After that take another integer target. You need to tell if you can make target by
adding any two different values from that array.
*/

#include <stdio.h>

int main() {
    int n, i, j, target;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    //as input from user
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);

    //operation here the problem...
    int sum = 0;
    int match;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            sum = ara[i] + ara[j];
            if(target == sum){
                match = sum;
            }
        }
    }

    if(target == match){
        printf("YES! \n");
    }
    else{
        printf("NO! \n");
    }

return 0;
}
