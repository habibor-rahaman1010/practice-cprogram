//Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
//N as input and tell if the array contains only one unique value or not. Print “YES” or “NO”.

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the value n: ");
    scanf("%d", &n);
    int ara[n];

    //input value form user in array...
    printf("Enter the value of array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    //operation here..
    int count = 0;
    for(i = 0, j = n - 1; i < n; i++, j--){
        int item1 = ara[i];
        int item2 = ara[j];
        if(item1 == item2){
            count = 1;
        }
        else{
            count = 0;
        }
    }
    if(count == 1){
        printf("YES! \n");
    }
    else{
        printf("NO! \n");
    }

return 0;
}
