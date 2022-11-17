
#include <stdio.h>

int main() {
    int t, run;
    scanf("%d", &t);

    while(t--){
        int ans = 0;
        for(int i = 0; i < 6; i++){
            scanf("%d", &run);
            if(run > 0){
                ans = 1;
            }

        }
        if(ans == 0){
            printf("YES \n");
        }
        else{
            printf("NO \n");
        }
    }

return 0;
}
