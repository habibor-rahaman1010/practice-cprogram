//array sort ascending order in c program....

#include <stdio.h>

int main() {
    int ara[] = {19, 11, 17, 18, 13, 20, 14, 16, 15, 12};
    int len = sizeof(ara) / sizeof(ara[0]);
    int i, j;

    int tamp;
    for(i = 0; i < len; i++){
        for(j = 0; j < len; j++){
            if(ara[i] < ara[j]){
                tamp = ara[i];
                ara[i] = ara[j];
                ara[j] = tamp;
            }
        }
    }

    for(i = 0; i < len; i++){
        printf("%d ", ara[i]);
    }


return 0;
}
