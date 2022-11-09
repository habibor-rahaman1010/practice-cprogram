//2D array input and output in c program input as from use...

#include <stdio.h>

int main() {
    int row = 5, col = 5, i = 0, j = 0;
    int number[row][col];

    for( i = 0; i <= 5 - 1; i++){
        for(j = 0; j <= 5 - 1; j++){
            scanf("%d", &number[i][j]);
        }
        printf("\n");
    }

    for( i = 0; i <= 5 - 1; i++){
        for(j = 0; j <= 5 - 1; j++){
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

return 0;
}

