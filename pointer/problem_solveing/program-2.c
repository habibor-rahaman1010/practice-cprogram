

#include <stdio.h>
int sort_accending(int ara[], int n, int k) {
    int i, j, tamp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(ara[j] > ara[j + 1]){
                tamp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = tamp;
            }
        }
    }

    printf("%d \n", ara[k]);
}

int sort_dccending(int ara[], int n, int k) {
    int i, j, tamp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(ara[j] < ara[j + 1]){
                tamp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = tamp;
            }
        }
    }

    printf("%d \n", ara[k]);
}


int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ara[n];
    int i;
    printf("Enter elements of an array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    int smallest = sort_accending(ara, n, k);
    int largest = sort_dccending(ara, n, k);

    printf("%dth largest element: %d \n", k, largest);
    printf("%dth largest element: %d \n", k, smallest);

return 0;
}
