//A. Next Round problem solve of CodeForces...

#include <stdio.h>

int main() {
    int i, n, k, ara[50], count = 0;
    printf("Enter the value of (n and k): ");
    scanf("%d %d", &n, &k);

    if(n >= 1 && n <= 50 && k >= 1 && k <= n){
        for(i = 0; i < n; i++){
            scanf("%d", ara[i]);
        }

        for(i = 0; i < n; i++){
            if(ara[i] >= ara[k] && ara[i] > 0){
                count++;
            }
        }
        printf("%d \n", ans);
    }

return 0;
}
