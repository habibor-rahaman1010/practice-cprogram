//2 2D array multiply  in c program...

#include <stdio.h>

int main() {
    int i, j;
    int result[2][2];
    int result2[2][2];

    // input matrix
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &result[i][j]);
        }
    }

    // input matrix
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &result2[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", result[i][j] * result2[i][j]);
        }
        printf("\n");
    }

return 0;
}




