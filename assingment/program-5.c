#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(n > 0){
        if(n % 2 == 0){
        printf("%d", n);
        n = n / 2;
        if(n > 0){
           printf(", ");
        }
    }
    else{
        printf("%d", n);
        n = n - 1;
        if(n > 0){
           printf(", ");
        }
    }
}

return 0;
}
