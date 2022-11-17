//array sort descending order....

#include <stdio.h>

int main() {
    int i, j;
    int ara[] = {45, 34, 23, 56, 4, 6, 8, 34, 99, 12};
    int len = sizeof(ara) / sizeof(ara[0]);


    int tamp;
    for(i = 0; i < len; i++){
        for(j = 0; j < len; j++){
            if(ara[i] > ara[j]){
                tamp = ara[i];
                ara[i] = ara[j];
                ara[j] = tamp;
            }
        }
    }

    for(i = 0; i <= len - 1; i++){
        printf("%d ", ara[i]);
    }

return 0;
}

