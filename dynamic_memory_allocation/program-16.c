// memory allocate and re allocate in c program...

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int *ptr = (int *) malloc(N * sizeof(int));
    if(ptr == NULL){
        printf("Memory allocated failed try again! \n");
    }
    else{
        int i;
        printf("Enter array elements: ");
        for(i = 0; i < N; i++){
            scanf("%d", &ptr[i]);
        }

        printf("\nPrint the first allocated array\n");
        for(i = 0; i < N; i++){
            printf("%d ", ptr[i]);
        }

        int new_size;
        printf("\nEnter new array size: ");
        scanf("%d", &new_size);
        ptr = realloc(ptr, new_size * sizeof(int));

        if(ptr == NULL){
            printf("Memory allocated failed try again! \n");
        }
        else{
            printf("Enter new elements in reallocated array: ");
            for(i = N; i < N + new_size; i++){
                scanf("%d", &ptr[i]);
            }

            printf("\nPrint the total allocated array\n");
            for(i = 0; i < N + new_size; i++){
                printf("%d ", ptr[i]);
            }
            printf("\n");
        }

    }

return 0;
}

