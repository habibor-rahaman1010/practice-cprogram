
#include <stdio.h>

int do_sum(int ara[], int n) {
    int i, sum = 0;

    for(i = 1; i <= n; i++){

        if(ara[i] % 2 != 0 && i % 2 != 0){
            sum += ara[i] + i;
        }

        if(ara[i] % 2 == 0 && i % 2 == 0){
            sum += ara[i] + i;
        }

    }

    return sum;
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 100){
        int ara[n];
        for(i = 1; i <= n; i++){
            scanf("%d", &ara[i]);
        }

        int result = do_sum(ara, n);
        printf("%d \n", result);
    }
    else{
        printf("Constraints (n >= 1 && n <= 100) \n");
    }

return 0;
}
