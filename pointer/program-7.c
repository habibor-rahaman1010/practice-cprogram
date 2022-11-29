//pointer in c program....

#include <stdio.h>

int main() {
    long long int ara[5] = {23, 45, 67, 88, 98};

    printf("%p \n", &ara[0]);
    printf("%p \n", &ara[1]);
    printf("%p \n", &ara[2]);
    printf("%p \n", &ara[3]);
    printf("%p \n", &ara[4]);


    printf("\n");

    printf("%d \n", &ara[0]);
    printf("%d \n", &ara[1]);
    printf("%d \n", &ara[2]);
    printf("%d \n", &ara[3]);
    printf("%d \n", &ara[4]);

return 0;
}

