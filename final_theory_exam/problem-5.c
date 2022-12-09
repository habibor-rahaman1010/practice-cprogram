// melloc use in c program....

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int *ara;
    ara = (int *) malloc(N * sizeof(int));

    if(ara == NULL){
        printf("Memory does not allocated! \n");
    }
    else{
        int i;
        for(i = 0; i < N; i++){
            scanf("%d", &ara[i]);
        }

        for(i = 0; i < N; i++){
            printf("%d ", ara[i]);
        }
    }
    free(ara);

return 0;
}
