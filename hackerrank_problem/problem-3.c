//Two-Dimensional Operation

#include <stdio.h>

int main() {
    int row, col, i, j;
    printf("Enter the value of (row and col): ");
    scanf("%d %d", &row, &col);
    int ara[row][col];

    //input from user here...
    for(i = 1; i <= row; i++){
        for(j = 1; j <= col; j++){
            scanf("%d", &ara[i][j]);
        }
    }

    //operation of matrix array...
     for(i = 1; i <= row; i++){
        for(j = 1; j <= col; j++){
            if(ara[i][j] == i && ara[i][j] == j){
                ara[i][j] += 3;
            }
            else if(ara[i][j] == i && ara[i][j] != j){
                ara[i][j] += 2;
            }
            else if(ara[i][j] != i && ara[i][j] == j){
                ara[i][j] += 1;
            }
        }
    }

    //output is here...
    printf("\n");
    for(i = 1; i <= row; i++){
        for(j = 1; j <= col; j++){
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }

return 0;
}
