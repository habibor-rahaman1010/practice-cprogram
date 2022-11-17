#include <stdio.h>
#include <string.h>

int main() {
    int t, i, j, n;
    scanf("%d", &t);

    if(t > 0 && t <= 10){
        for(j = 0; j < t; j++){
            scanf("%d", &n);
            char ara[n];
            scanf("%s", ara);
            int len = strlen(ara);
            int flag = 0, flag2 = 0;
            for(i = 0; i < len; i++){
                if(ara[i] == 'H'){
                    flag++;
                }
                else if(ara[i] == 'T'){
                    flag2++;
                }
            }
            if(flag > flag2){
                printf("England \n");
            }
            else{
                printf("Pakistan \n");
            }
        }
    }

return 0;
}
