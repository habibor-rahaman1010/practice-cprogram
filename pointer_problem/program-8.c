/*
You have given positive integer N, the size of an array as input. Take an array of size N as input. You have to find the
sum of those element in array which last digit is zero. Implement this by using function.
*/

#include <stdio.h>

int array_sum(int ara[], int n) {
    int sum = 0;
    while(n--){
        if(ara[n] % 10 == 0){
            sum += ara[n];
        }
    }

return sum;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int i, ara[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int result = array_sum(ara, n);
    printf("Sum is: %d \n", result);

return 0;
}
