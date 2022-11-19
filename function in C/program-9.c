//LCM in c program....

#include <stdio.h>

int LCM(int x, int y) {
    int ans = 0, i;

    for(i = x; i > 1; i--){
        if(x % i == 0 && y % i == 0){
            ans = i;
            break;
        }
    }
    return (x * y) / ans;
}

int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("The LCM is: %d \n", LCM(x, y));

return 0;
}
