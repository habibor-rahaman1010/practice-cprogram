

#include <stdio.h>
int main() {
    int n, k, run = 0, reject = 0;
    scanf("%d %d", &n, &k);

    if(n >= 1 && n <= 100 && 0 <= k && k <= 100){
        for(int i = 0; i < n; i++){
            if(run >= 0 && run <= 100){
                scanf("%d", &run);
                if(run < k){
                    reject++;
                }
            }
        }
        printf("%d", reject);
    }


return 0;
}
