// LCM in c program...

#include <stdio.h>

int LCM(int x, int y) {
    int i, lcm, small, big;

    if(x < y){
        small = x;
        big = y;
    }
    else{
        small = y;
        big = x;
    }

    for(i = 1; i <= small; i++){
        if(x % i == 0 && y % i == 0){
            lcm = i;
        }
    }
    return lcm;
}

int main() {
    int a, b;
    printf("Enter the value of (a, b): ");
    scanf("%d %d", &a, &b);

    int result = LCM(a, b);
    printf("LCM is: %d \n", (a * b) / result);

return 0;
}

