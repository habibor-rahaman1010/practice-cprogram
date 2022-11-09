//print a 2D array in c program...

#include <stdio.h>

int main() {
    int i = 0, j = 0;
    int number[5][5] = {
        34, 45, 67, 54, 90,
        87, 23, 45, 78, 93,
        12, 34, 32, 85, 63,
        44, 77, 43, 23, 99,
        50, 60, 33, 77, 91,
    };

    for( i = 0; i <= 5 - 1; i++){
        for(j = 0; j <= 5 - 1; j++){
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

return 0;
}
