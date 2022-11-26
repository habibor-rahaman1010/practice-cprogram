// GCD in c program...

#include <stdio.h>

int GCD(int x, int y) {
    int i, gcd;

    for(i = 1; i <= x; i++){
        if(x % i == 0 && y % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int a, b;
    printf("Enter the value of (a, b): ");
    scanf("%d %d", &a, &b);

    int result = GCD(a, b);
    printf("GCD is: %d", result);

return 0;
}
