// Mixed Array

#include <stdio.h>

int get_prime(int *ara, int *n) {
    int i, counter = 0;

    for(i = 2; i < *n; i++){
        if(*(ara) == 2){
            counter++;
        }

        if(*(ara + i) % 2 == 0){
            continue;
        }
        else{
            counter++;
        }
    }
    printf("%d ", counter);
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int ans = get_prime(ara, &n);
return 0;
}
