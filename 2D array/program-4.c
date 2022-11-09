//2D array input and output in c program input as from use...

#include <stdio.h>

int main() {
    int row, col, i = 0, j = 0;
    printf("Enter the value of (Row and Column): ");
    scanf("%d %d", &row, &col);
    int number[row][col];

    printf("Enter the element of two dimensional array: ");
    for( i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            scanf("%d", &number[i][j]);
        }
        printf("\n");
    }

    for( i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

return 0;
}


