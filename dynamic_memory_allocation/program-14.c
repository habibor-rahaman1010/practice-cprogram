// memory realloc for malloc in c program...

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter value of N: ");
    scanf("%d", &N);

    int *ptr = (int *) calloc(N, sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation dose not succes");
    }
    else{
        int i;
        printf("Enter the element of array: ");
        for(i = 0; i < N; i++){
            scanf("%d", (ptr + i));
        }
        printf("\nPrinted the array\n");

        for(i = 0; i < N; i++){
            printf("%d ", *(ptr + i));
        }

        int memory_size = (int) sizeof(*ptr) * N;
        printf("\nbefore memory size: %d byte", memory_size);

        int new_memory;
        printf("\nEnter new memory size: ");
        scanf("%d", &new_memory);

        ptr = realloc(ptr, new_memory * sizeof(int));
        memory_size = (int) sizeof(*ptr) * new_memory + memory_size;
        printf("After memory size: %d byte\n", memory_size);

        free(ptr);
    }

return 0;
}


