
#include <stdio.h>

int do_sum(int ara[], int n) {
    printf("%d \n", ara[1] + 2);
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
