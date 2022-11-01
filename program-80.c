// find out array max element in odd number in c program...

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

    int newArr[n], j;
    int max = newArr[0];

    for(i = 0, j = 0; i < n; i++, j++){
        if(arr[i] % 2 != 0){
            newArr[j] = arr[i];

            if(newArr[j] > max){
                max = newArr[j];
            }
        }
        else{
            newArr[i] = 0;
        }
    }

    printf("The odd max element is: %d \n", max);

return 0;
}


