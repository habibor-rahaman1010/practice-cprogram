//Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
//N as input and show output in reverse order.

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int number[n], tamp;

    //array in from use here...
    printf("Enter value of array element: ");
    for(i = 0; i < n; i++){
        scanf("%d", &number[i]);
    }

    //revers array to copy in newAra...
    for(i = 0; i < n; i++){
        tamp = number[n - 1];
        number[n - 1] = number[0];
        number[0] = tamp;
    }

    for(i = 0; i < n; i++){
        int item = number[i];
        printf("%d ", item);
    }

return 0;
}

