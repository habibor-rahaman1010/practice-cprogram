//find minimum number in 2D array...

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

    int min = number[0][0];
    for( i = 0; i <= 5 - 1; i++){
        for(j = 0; j <= 5 - 1; j++){
            if(number[i][j] < min){
                min = number[i][j];
            }
        }
    }
    printf("Max value is: %d", min);

return 0;
}


