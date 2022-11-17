//2D array revers way print in c program...

#include <stdio.h>

int main() {
    int i, j;
    int result[5][5] = {
        23, 45, 67, 32, 10,
        78, 54, 77, 31, 30,
        99, 11, 43, 66, 55,
        12, 34, 56, 78, 90,
        87, 65, 54, 32, 19
    };

    for(i = 0; i < 5; i++){
        for(j = 4; j >= 0; j--){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

return 0;
}


