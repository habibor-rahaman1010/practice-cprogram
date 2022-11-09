// check it is primary scalar matrix or not in c program...

#include <stdio.h>

int main() {
    int i, j, row, col;
    printf("Enter the value of (row and col): ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];

    for(i = 0; i <= row - 1; i++) {
        for(j = 0; j <= col - 1; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(row == col){
        int flag = 1;
        for(i = 0; i <= row - 1; i++) {
            for(j = 0; j <= col - 1; j++){
                if(i == j){
                    if(matrix[i][j] != 1){
                        flag = 0;
                    }
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
           printf("It\'s is identy matrix!");
        }
        else{
            printf("It\'s not identy matrix!");
        }
    }
    else{
        printf("It\'s not identy matrix!");
    }

return 0;
}
