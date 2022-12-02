// array element swap in c program use function and pointer....

#include <stdio.h>

void swap_ara(int *ara, int *L, int *R) {
    int tamp = *(ara + *L);
    *(ara + *L) = *(ara + *R);
    *(ara + *R) = tamp;

}

void do_query(int ara[], int n) {
        int q, i;
        printf("Enter query limit: ");
        scanf("%d", &q);

        int L, R;
        printf("Enter the value of (L and R): ");
        for(i = 1; i <= q; i++){
            scanf("%d %d", &L, &R);
            swap_ara(ara, &L, &R);
        }

        for(i = 1; i <= n; i++){
            printf("%d ", ara[i]);
        }

return;
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter array element: ");
    int ara[n];
    for(i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
    }

    do_query(ara, n);

return 0;
}
