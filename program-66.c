// codeforces problem A. Elephant

#include <stdio.h>

int main() {
    int x, s;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 1000000){
        s = (x / 5) + (x % 5 != 0);
        printf("%d", s);
    }

return 0;
}

