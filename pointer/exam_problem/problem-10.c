
#include <stdio.h>

int is_beautiful(int *ara, int *n) {
    int i, j, counter = 0;

    for(i = 0; i < *n; i++){
        for(j = 0; j < 2; j++){
             if(*(ara + i) % 10 == 7){
                counter++;
                *(ara + j) /= 10;
            };
        }
    }

    printf("%d ", counter);
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ara[n];
    printf("Enter element of an array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int ans = is_beautiful(ara, &n);

return 0;
}
