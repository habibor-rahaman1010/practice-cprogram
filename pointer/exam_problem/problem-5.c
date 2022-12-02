
#include <stdio.h>

int do_sum(int ara[], int n) {
    int i, even_sum = 0, odd_sum = 0;

    for(i = 1; i <= n; i++){
        if(ara[i] % 2 != 0 && i % 2 != 0){
            odd_sum = ara[i] + i;
        }
        else if(ara[i] % 2 == 0 && i % 2 == 0){
            even_sum = ara[i] + i;
        }
    }
    printf("%d", even_sum + odd_sum);

    //return sum;
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ara[n];
    for(i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
    }

    int result = do_sum(ara, n);

return 0;
}
