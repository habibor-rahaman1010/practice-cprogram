// find out array min element in c program...

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number of value input n: ");
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter value of %d-th position value of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nHere is output the program... \n");
    int min = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("The min element is: %d \n", min);

return 0;
}


