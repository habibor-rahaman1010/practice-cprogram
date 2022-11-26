// GCD in c program...

#include <stdio.h>

int GCD(int x, int y) {
    int i, gcd, small, big;

    if(x < y){
        small = x;
        big = y;
    }
    else{
        small = y;
        big = x;
    }

    for(i = small; i >= 1; i--){
        if(x % i == 0 && y % i == 0){
            gcd = i;
            break;
        }
    }
    return gcd;
}

int main() {
    int a, b;
    printf("Enter the value of (a, b): ");
    scanf("%d %d", &a, &b);

    int result = GCD(a, b);
    printf("GCD is: %d \n", result);

return 0;
}

