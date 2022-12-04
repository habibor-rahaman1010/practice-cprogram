//dynamic memory allocation in c program use calloc

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int *ara;
    ara = (int *) calloc(N, sizeof(int *));

    if(ara == NULL){
        printf("Memory allocation dose not success yet! \n");
    }
    else{
        int i;
        printf("Enter values of array: ");
        for(i = 0; i < N; i++){
            scanf("%d", &ara[i]);
        }

        printf("\nPrint elements of an array\n");
        for(i = 0; i < N; i++){
            printf("%d ", ara[i]);
        }
        printf("\n");
        free(ara);
    }

return 0;
}
