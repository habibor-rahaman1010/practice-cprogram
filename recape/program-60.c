//2D array input in c program...

#include <stdio.h>

int main() {
    int i, j;
    int result[3][3];

    // input matrix
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &result[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

return 0;
}

