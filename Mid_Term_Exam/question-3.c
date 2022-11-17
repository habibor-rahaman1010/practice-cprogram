#include <stdio.h>
#include <math.h>
int main() {
    int ara[15], i;

    for(i = 1; i <= 15; i++){
        ara[i] = pow(2, i - 1);
        printf("%d ", ara[i]);
    }

return 0;
}
