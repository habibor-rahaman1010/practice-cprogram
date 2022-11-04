//A. IQ test problem of CodeForces...

#include <stdio.h>

int main() {
    int i, n, ara[101];
    int ec, oc, ans;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter value of array element: ");
    if(n >= n && n <= 100){
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        for(i = 0; i < n; i++){
            if(ara[i] % 2 == 0){
                ec++;
            }
            else{
                oc++;
            }
        }
        if(ec == 1){
            for(i = 0; i < n; i++){
                if(ara[i] % 2 == 0){
                    ans = i;
                }
            }
        }
        else{
            for(i = 0; i < n; i++){
                if(ara[i] % 2 != 0){
                    ans = i;
                }
            }
        }

        printf("%d \n", ans + 1);
    }


return 0;
}
