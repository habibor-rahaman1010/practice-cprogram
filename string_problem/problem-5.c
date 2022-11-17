/*
You are given a matrix of size NxM where N is the row number and M is the column number. Now first line of the
input will contain the value of N and M , and the next line will contain the matrix, Now print the transpose version of
this matrix.
*/

#include <stdio.h>

int main() {
    int N, M, i, j;
    printf("Enter the value of (N and M): ");
    scanf("%d %d", &N, &M);
    int ara[N][M];

    for(i = 0; i <= N - 1; i++){
        for(j = 0; j <= M - 1; j++){
            scanf("%d", &ara[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i <= N - 1; i++){
        for(j = 0; j <= M - 1; j++){
            printf("%d ", ara[j][i]);
        }
        printf("\n");
    }

return 0;
}

