//first and last digit sum in an array in c program...

#include <stdio.h>

void digit_sum() {
    int n,i;
    printf("Enter value of array size: ");
    scanf("%d", &n);
    int ara[n];

    printf("Enter the value of element of an array (must be 4 digit): ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int sum = 0;
    for(i = 0; i < n; i++){
        sum += ara[i] % 10;
        sum += ara[i] / 1000;
    }
    printf("Sum last and first digit is: %d \n", sum);

}


int main() {
    digit_sum();

return 0;
}
