/*
There's a chessboard of size 3×3 (It is a special chessboard for Phitron’s student) . R rooks are placed on it and all
others cells are empty. Now you need to tell the total empty cells and their position (row,column) .
The first line of the input will contain a single positive integer R, The next line will contain the position of the R
rooks in this (x,y) format where x is the row number of the rook and y is the column number of the rook.
Note – Here row and column starts from 1.
*/

#include <stdio.h>

int main() {
    int chess[3][3];
    int row = 3, col = 3;
    int i, j, x, y, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        chess[x][y] = 1;
    }

    printf("Total empty cells exist right now: %d \n", (3 * 3) - n);
    for(i = 1; i <= row; i++){
        for(j = 1; j <= col; j++){
            if(chess[i][j] != 1){
                printf("%d %d \n", i, j);
            }
        }
    }

return 0;
}
