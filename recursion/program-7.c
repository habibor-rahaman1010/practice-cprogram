// array sum in c program use recursion...


#include <stdio.h>

int sum_ara(int ara[], int i, int n) {
    if(i == n) return 0;
    int s = sum_ara(ara, i + 1, n);
    return s + ara[i];
}

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int ara[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int sum = sum_ara(ara, 0, n);
    printf("Sum of array: %d", sum);

return 0;
}
