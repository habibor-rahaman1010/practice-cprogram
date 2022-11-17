
#include <stdio.h>
int main() {
    int ara[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int i, tamp;

    for(i = 0; i < 5 - 1; i++){
        if(ara[i] > ara[i + 1]){
            tamp = ara[i];
            ara[i] = ara[i + 1];
            ara[i + 1] = tamp;
        }
    }
    for(i = 0; i < 5; i++){
        printf("%d ", ara[i]);
    }

return 0;
}

