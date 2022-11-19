//GCD in c program....

#include <stdio.h>

int main() {
    int i, x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    int ans = 0;
    i = x;
    while(i > 1){
        if(x % i == 0 && y % i == 0){
            ans = i;
            break;
        }
        i--;
    }
    printf("The GCD is: %d \n", ans);

return 0;
}

