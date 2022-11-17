#include <stdio.h>

int main() {
    int t, i, j, n;
    scanf("%d", &t);

        int m[t];
        for(j = 0; j < t; j++){
            scanf("%d", &n);
            int run[n];
            for(i = 0; i < n; i++){
                scanf("%d", &run[i]);
            }

            int max = run[0];
            for(i = 0; i < n; i++){
                if(run[i] > max){
                    max = run[i];
                    m[j] = max;
                }
            }
        }
        for(j = 0; j < t; j++){
            printf("%d \n", m[j]);
        }

return 0;
}

