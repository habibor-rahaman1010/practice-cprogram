// array sort ascending order to use bubble sort algorithm in c program...

#include <stdio.h>

int main() {
    int ara[] = {19, 11, 17, 18, 13, 20, 14, 16, 15, 12};
    int len = sizeof(ara) / sizeof(ara[0]);
    int i, j, tamp;

    for(i = 0; i < len; i++){
        for(j = 0; j < len - 1; j++){
            if(ara[j] > ara[j + 1]){
                tamp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = tamp;
            }
        }
    }


    //print all sorted value...
    for(i = 0; i < len; i++){
        printf("%d ", ara[i]);
    }

return 0;
}

