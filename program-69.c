// array input and output in c program...

#include <stdio.h>

int main() {
    int i, arr[5], n = 5;

    for(i = 0; i < n; i++){
        printf("Enter the value of array %d position: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\noutput here... \n");
    for(i = 0; i < n; i++){
        printf("%dth position value is: %d \n", i, arr[i]);
    }
}
