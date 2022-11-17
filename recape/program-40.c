//find min element in array in c program...

#include <stdio.h>

int main() {
    int ara[10], i;

    for(i = 0; i < 10; i++){
        scanf("%d", &ara[i]);
    }

    int maxx = ara[0];
    for(i = 0; i < 10; i++){
        if(ara[i] < maxx){
            maxx = ara[i];
        }
    }
    printf("The min value is: %d", maxx);


return 0;
}


