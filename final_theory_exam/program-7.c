// You have been given an N x M  matrix, Now your task is to take two matrix as input and find the sum of this two matrix.

#include <stdio.h>

int main() {
    int N, M, i, j;
    printf("Enter the value of (N and M): ");
    scanf("%d %d", &N, &M);

    int ara1[N][M];
    int ara2[N][M];
    int sum[N][M];

    printf("Enter element of ara1: ");
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &ara1[i][j]);
        }
    }

    printf("Enter element of ara2: ");
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &ara2[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            sum[i][j] = ara1[i][j] + ara2[i][j];
        }
    }

    printf("\n");
     for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
     }

return 0;
}
