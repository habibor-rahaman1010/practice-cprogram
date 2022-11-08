//2D array in c program input and show output....

#include <stdio.h>

int main() {
    int row, col;
    printf("Enter your matrix row and column: ");
    scanf("%d %d", &row, &col);
    int i, j;
    int number[row][col];

    printf("Enter the value of number array: ");
    for(i = 0; i <= row -1; i++){
        for(j = 0; j <= col - 1; j++){
            scanf("%d ", &number[i][j]);
        }
    }

    for(i = 0; i <= row -1; i++){
        for(j = 0; j <= col - 1; j++){
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

return 0;
}


