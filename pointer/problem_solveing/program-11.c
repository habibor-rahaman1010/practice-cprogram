//special number of c program...

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ans = sum_of_digit();

    if(is_prime(ans) == 1){
        printf("Special Number");
    }
    else{
        printf("Not Special Number");
    }

return 0;
}
