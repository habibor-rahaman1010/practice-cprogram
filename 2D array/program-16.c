// check it is secondary scalar matrix or not in c program...

#include <stdio.h>
#include <math.h>

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
        int same = matrix[0][0];
        for(i = 0; i <= row - 1; i++) {
            for(j = 0; j <= col - 1; j++){
                if(i + j != sqrt(row - 1)){
                    if(matrix[i][j]!= same){
                        flag = 0;
                         continue;
                    }
                }
                else{
                    if(matrix[i][j] != 0){
                        flag = 0;
                    }
                }
            }
        }
        if(flag == 1){
           printf("It\'s is scaler matrix!");
        }
        else{
            printf("It\'s not scaler matrix!");
        }
    }
    else{
        printf("It\'s not scaler matrix!");
    }

return 0;
}

