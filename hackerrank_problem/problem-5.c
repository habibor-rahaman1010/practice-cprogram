//Xoss Pattern in c program...

#include <stdio.h>

int main() {
    int i, j, n, k = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            if(i == 1 || i == n || j == i){
                printf("%d", j);
            }
            else{
                printf(" ");
            }
        }

        k = n;
        for(j = 1; j < i; j++){
            if(i == 1 || i == n || j == i - 1){
                printf("%d", k);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


return 0;
}

