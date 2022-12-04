//dynamic memory allocation in c program use calloc

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int *ara;
    ara = (int *) calloc(N, sizeof(int));

    if(ara == NULL){
        printf("Memory allocation dose not successful yet! \n");
    }
    else{
        int i;
        printf("Enter array element: ");
        for(i = 0; i < N; i++){
            scanf("%d", (ara + i));
        }

        printf("\nPrint the array element\n");
        for(i = 0; i < N; i++){
            printf("%d ", *(ara + i));
        }
        printf("\n");
        free(ara);
    }

return 0;
}
