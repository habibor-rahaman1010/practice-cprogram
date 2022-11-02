//Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
//N as input and show output in reverse order.

#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int number[n];
    int newAra[n];

    //array in from use here...
    printf("Enter value of array element: ");
    for(i = 0; i < n; i++){
        scanf("%d", &number[i]);
    }

    //revers array to copy in newAra...
    for(i = 0, j = n -1; i < n; i++, j--){
        newAra[j] = number[i];
    }

    for(i = 0; i < n; i++){
        int item = newAra[i];
        printf("%d ", item);
    }

return 0;
}
