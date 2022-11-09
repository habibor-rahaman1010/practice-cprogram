//find even number in 2D array...

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
            if(number[i][j] % 2 == 0){
                printf("%d ", number[i][j]);
            }
        }
    }

return 0;
}

