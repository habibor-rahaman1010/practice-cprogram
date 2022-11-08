//2D array in c program....

#include <stdio.h>

int main() {
    int row = 4, col = 4;
    int i, j;
    int number[4][4] = {
        23, 45, 67, 89,
        54, 67, 87, 99,
        12, 34, 42, 63,
        90, 76, 33, 88
    };

    for(i = 0; i <= row -1; i++){
        for(j = 0; j <= col - 1; j++){
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

return 0;
}
