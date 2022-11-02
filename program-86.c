//nested loop in c program use while loop...

#include <stdio.h>

int main() {
    int i, j;

    i = 0;
    while(i < 5){

        j = 0;
        while(j <= i){
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }

return 0;
}

