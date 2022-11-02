//triangle hollo pattern draw in c program use for loop...

#include <stdio.h>

int main() {
    int i, j, m, n = 10;
    printf("*\n");
    for(i = 0; i < (n - 2); i++){
        printf("*");

        for(j = 0; j <= (i - 1); j++){
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    // print n time
    for(m = 0; m < n; m++){
        printf("*");
    }

return 0;
}

