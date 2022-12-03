// Beautiful array in c program...

#include <stdio.h>

int is_beautiful(int ara[], int *n) {
    int i = 0, j, counter = 0;
    int *a = &ara[0], half = *n / 2;

    for(i = 0; i < *n; i++){
        for(j = 0; j < *(a + i); j++){
             if(*(ara + i) % 10 == 7){
                counter++;
            }
            *(ara + i) /= 10;
        }
    }

    printf("%d", counter);
    if(counter >= half){
        return 1;
    }
    else{
        return 0;
    }
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

