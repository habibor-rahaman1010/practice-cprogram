//array sort use selection algorithm in c program...

#include <stdio.h>
int main() {
    int ara[10] = {10, 5, 3, 6, 7, 9, 1, 8, 4, 2};
    int i, j;
    int len = sizeof(ara) / sizeof(ara[0]);
    int sortedArray[10];

    int min, min_index;

    for(j = 0; j < len; j++){
        min = ara[0];
        min_index = 0;
        for(i = 0; i < len; i++){
            if(ara[i] < min){
                min = ara[i];
                min_index = i;
            }
        }
        sortedArray[j] = min;
        ara[min_index] = 11;
    }

    for(i = 0; i < len; i++){
        printf("%d ", sortedArray[i]);
    }

return 0;
}
