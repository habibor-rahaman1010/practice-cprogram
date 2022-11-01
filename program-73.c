// array all element summation in c program...

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

    printf("\nHere all even number... \n");
    int sum = 0;
    for(i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("Total sum is: %d", sum);

return 0;
}
