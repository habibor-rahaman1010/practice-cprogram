#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);

    if(n >= 1 && n <= 20){
        for(i = 1; i <= n; i++){
            for(j = i; j >= 1; j--){
                printf("%d ", j);
            }
            printf("\n");
        }
    }

return 0;
}
