/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.
*/


#include <stdio.h>

int do_sum(int n) {
    int i, sum = 0, flag = 1;

    for(i = 1; i <= n; i++){
        if(flag > 6){
            flag = 1;
        }

        if(flag <= 3){
            sum += i;
        }
        else if(flag > 3 && flag <= 6){
            sum -= i;
        }

        flag++;
    }
return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = do_sum(n);
    printf("%d \n", result);

return 0;
}
