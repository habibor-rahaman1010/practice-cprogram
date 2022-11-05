#include<stdio.h>
int main(){

        int n, i;
        scanf("%d", &n);
        int roll[n + 5];

        for(i = 0; i < n; i++){
            scanf("%d", &roll[i]);
        }

        int k;
        scanf("%d" , &k);
        int s = n - k;
        for(i = k; i < n; i++){
            printf("%d " , roll[i]);
        }

        for(i = 0; i < k; i++){
            printf("%d " , roll[i]);
        }
        printf("\n");

    return 0;
}
