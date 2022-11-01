#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of (x and y): ");
    scanf("%d %d", &x, &y);

    if(x % y == 0){
        printf("The first number is divisible by the first number. \n");
    }
    else if(y % x == 0){
        printf("The second number is divisible by the first number. \n");
    }
    else{
        printf("None of them are divisible by the other. \n");
    }

return 0;
}
