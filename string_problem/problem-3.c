/*
You are given two matrix of size NxM where N is the row number and M is the column number. Now first line of
the input will contain the value of N and M , and the next two line will contain the two matrix, Now perform
matrix addition operation.
*/

#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the value (row and col): ");
    scanf("%d %d", &row, &col);
    int ara1[row][col];
    int ara2[row][col];

    int i, j, w = 0;

    for(i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            scanf("%d", &ara1[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            scanf("%d", &ara2[i][j]);
        }
    }
    printf("\n");


    //operation on array...
    int sum = 0;
    for(i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            printf("%d ", ara1[i][j] + ara2[i][j]);
        }
        printf("\n");
    }

return 0;
}
