// pattern print in c program...

#include <stdio.h>
int main() {
    int i, j;

    for(i = 0; i < 7; i++){
        for(j = 0; j < (i * 2); j++){
            printf("* ");
        }
        printf("\n");
    }

return 0;
}


