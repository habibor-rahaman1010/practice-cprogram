#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d", i);
            if(n > i){
                printf(", ");
            }
            if(i > (n - i)){
                printf(".");
            }
        }
    }

return 0;
}
