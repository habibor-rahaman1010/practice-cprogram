//array input in c program from user...

#include <stdio.h>

int main() {
    int ara[10], i;

    for(i = 0; i < 10; i++){
        scanf("%d", &ara[i]);
    }

    printf("\nprinting the array \n");

    for(i = 0; i < 10; i++){
        printf("%d ", ara[i]);
    }


return 0;
}
