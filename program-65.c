// codeforces problem A. Elephant

#include <stdio.h>

int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 1000000){
        if(x % 5 == 0){
            printf("%d", x / 5);
        }
        else{
            printf("%d", (x / 5) + 1);
        }
    }

return 0;
}
