// array in c program...

#include <stdio.h>

int main() {
    int i;
    int ara[5] = {0, 0, 0, 0, 0};

    ara[0] = 23;
    ara[1] = 14;
    ara[2] = ara[0] - 3;
    ara[3] = ara[1] + ara[2];
    ara[5 - 1] = ara[3 - 1] + ara[4 - 3] + 6;

    for(i = 0; i < 5; i++){
        printf("%d ", ara[i]);
    }

return 0;
}
