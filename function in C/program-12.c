// max value find out in c program use function....

#include <stdio.h>

int max_of_three(int x, int y, int z) {
    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    else{
        return z;
    }
}

int main() {
    int a, b, c;
    while(1){
        printf("Enter the value of (a, b, and c): ");
        scanf("%d %d %d", &a, &b, &c);
        int result = max_of_three(a, b, c);
        printf("Max value is: %d \n", result);
    }

return 0;
}
