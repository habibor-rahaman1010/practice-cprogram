#include <stdio.h>

int gcd(int n1, int n2) {
    int i, gcd = 0;
    for(i = 1; i <= n1 && i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
   return gcd;
 }

int main() {
    int T;
    scanf("%d", &T);
    while(T--){
        int n, i, j, pairs = 0;
        scanf("%d", &n);

        int ara[n];
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i != j){
                    int ans = gcd(ara[i], ara[j]);
                    ans == 1 ? pairs++ : pairs;
                }
            }
        }
        printf("%d\n", pairs);
    }

return 0;
}
