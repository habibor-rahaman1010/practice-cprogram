//2D array in c program... index print..

#include <stdio.h>

int main() {
    int row = 5, col = 3, i, j;

    for(i = 0; i <= row - 1; i++){
        for(j = 0; j <= col - 1; j++){
            printf("%d.%d ", i, j);
        }
        printf("\n");
    }

return 0;
}
