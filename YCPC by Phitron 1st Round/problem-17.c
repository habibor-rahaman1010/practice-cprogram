// matrix multiplication in c program...

#include <stdio.h>

void matrix_multiply() {
    int row, col;
    printf("Enter your (row and col it\'s must be squear): ");
    scanf("%d %d", &row, &col);

    int number1[row][col], number2[row][col];
    int i, j;
    printf("Enter element of number1 array: ");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &number1[i][j]);
        }
    }

    printf("Enter element of number2 array: ");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &number2[i][j]);
        }
    }

    //multiplication 2 array here...
    multiply = 1;
    for(i = 1; i <= row; i++){
        for(j = 1; j <= col; j++){
           multiply = number1[i][j] * number2[i][j];
           printf("%d ", multiply);
        }
        printf("\n");
    }

return;
}


int main() {

    matrix_multiply();

return 0;
}
