// find max min in array in c program use pointer....


#include <stdio.h>

void find_max_min(int ara[], int len, int *p1, int *p2) {
    *p1 = ara[0];
    *p2 = ara[0];

    for(int i = 0; i < len; i++){
        if(ara[i] > *p1){
            *p1 = ara[i];
        }
        else if(ara[i] < *p2){
            *p2 = ara[i];
        }
    }
}

int main() {
    int number[] = {45, 23, 77, 12, 67, 78, 99, 43, 41, 70};
    int len = sizeof(number) / sizeof(number[0]);   // int lne = sizeof(number) / sizeof(int);

    int maxx, minn;
    int *p1 = &maxx, *p2 = &minn;

    find_max_min(number, len, p1, p2);

    printf("Max is: %d \n", *p1);
    printf("Min is: %d \n", *p2);


return 0;
}
