//check it is secondary diagonal matrix or not in c program...

#include <stdio.h>
#include <math.h>

int main() {
    int row, col, i, j;
    printf("Enter the value of (row and col): ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];

    //input from user...
    for(i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(row == col){
        int flag = 1;
        for(i = 0; i <= row - 1; i++){
            for(j = 0; j <= col - 1; j++){
                if(i + j != (row - row) + 1){ //(row - row) + 1  another solution...
                    continue;
                }
                else{
                    if(matrix[i][j] != 0){
                        flag = 0;
                    }
                }
            }
        }
        if(flag == 1){
            printf("It\'s diagonal matrix");
        }
        else{
            printf("It\'s not diagonal matrix");
        }
    }
    else{
        printf("It\'s not diagonal matrix");
    }

return 0;
}

