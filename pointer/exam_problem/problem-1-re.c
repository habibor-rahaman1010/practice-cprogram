/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.
*/

#include <stdio.h>

int do_sum(int n) {
    int i, sum = 0;
    int ara[n];
    printf("Enter value (1+2+3-4-5-6+7+8+9-10-11-12+......N): ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        if(ara[i] > 0){
            sum += ara[i];
        }
        else if(ara[i] < 0){
            sum += ara[i];
        }
    }

return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = do_sum(n);
    printf("sum is: %d", result);

return 0;
}

