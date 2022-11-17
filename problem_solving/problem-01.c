#include <stdio.h>

void sequence(int x, int y) {
    int i, j, k, l, m = 1;
    k = y / x;
    l = x;
    for(i = 1; i <= k; i++){
        printf("%d", m);
        for(j = m + 1;j <= l;j++){
            printf(" %d", j);
        }
        printf("\n");
        m += x;
        l += x;
    }
}

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    sequence(x, y);

return 0;
}
