// dynamic memory allocation in c program....

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *) malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation is failed for some reason!");
    }
    else{
        int i;
        printf("Enter the element of an array: ");
        for(i = 0; i < n; i++){
            scanf("%d", &ptr[i]);
        }
        printf("Print the element of an array \n");
        for(i = 0; i < n; i++){
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);

return 0;
}
