//Divide Again!

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        if(n % 3 == 0){
            printf("%d \n", (n / 3));
        }
        else{
            printf("%d \n", -1);
        }
    }
    else{
        printf("%d \n", -1);
    }

return 0;
}
