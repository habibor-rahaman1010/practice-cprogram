// find out array max element in even number in c program...

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

   // int newArr[n];
    int max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    printf("The even max element is: %d \n", max);

return 0;
}


