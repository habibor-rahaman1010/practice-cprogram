//special number of c program...

#include <stdio.h>

int sum_of_digit(int n) {
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int is_prime(int ans) {
    if(ans == 1){
        return 1;
    }
    else{
        int i;
        for(i = 2; i < ans; i++){
            if(ans % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ans = sum_of_digit(n);

    if(is_prime(ans) == 1){
        printf("Special Number \n");
    }
    else{
        printf("Not Special Number \n");
    }

return 0;
}
