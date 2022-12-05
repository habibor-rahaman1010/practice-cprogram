//Dynamic memory allocation in c program use pointer....

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }

    for(i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }

    free(ptr);

return 0;
}

