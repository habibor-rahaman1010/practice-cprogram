/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.
*/


#include <stdio.h>

void do_sum() {
    int n;
    printf("Enter the value of n (1 + 2 + 3 - 4 - 5 - 6 and so on): ");
    scanf("%d", &n);
    int i, sum = 0;

    for(i = 0; i < n; i++){
        if(n > 0){
            sum += i;
        }
        else if(n < 0){
            sum += -i;
        }
    }
    printf("%d", sum);

return;
}

int main() {

    do_sum();

return 0;
}
