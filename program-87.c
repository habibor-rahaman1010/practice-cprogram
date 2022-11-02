//nested loop in c program use while loop...

#include <stdio.h>

int main() {
    int i, j;

    i = 5;
    while(i > 0){

        j = 0;
        while(j < i){
            printf("* ");
            j++;
        }
        i--;
        printf("\n");
    }

return 0;
}


