//GCD in c program....

#include <stdio.h>

int GCD(int x, int y) {
    int ans = 0, i;

    for(i = x; i > 1; i--){
        if(x % i == 0 && y % i == 0){
            ans = i;
            break;
        }
    }
    return ans;
}

int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("The GCD is: %d \n", GCD(x, y));

return 0;
}

