#include <stdio.h>

int main() {
    int n, i, ara[2000005];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int moves = 0;

    printf("Enter value of array element: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 1; i < n; i++){
        if(ara[i] < ara[i - 1]){
            moves += (ara[i - 1] - ara[i]);
            ara[i] = ara[i - 1];
        }
    }
    printf("%d", moves);

return 0;
}
