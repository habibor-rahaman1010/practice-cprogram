//pointer in c program....

#include <stdio.h>

int main() {
    long long int ara[10] = {23, 45, 67, 88, 98, 34, 23, 56, 77, 52};

    int i;
    for(i = 0; i < 10; i++){
        printf("%p \n", &ara[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("%d \n", &ara[i]);
    }

return 0;
}
