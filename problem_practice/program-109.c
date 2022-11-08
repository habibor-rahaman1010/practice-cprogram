// array sort in c program....


#include <stdio.h>

int main() {
    int n, i, j, tamp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    for(i = 0; i < n; i++){
        ara[i] = 0;
        scanf("%d", &ara[i]);
    }
    //4 3 5 2 1
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(ara[j] < ara[i]){
                tamp = ara[i];
                ara[i] = ara[j];
                ara[j] = tamp;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
return 0;
}
