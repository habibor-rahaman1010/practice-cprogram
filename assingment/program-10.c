#include <stdio.h>

int main() {
    int n, i, is_prime = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        is_prime = 1;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = 1;
            break;
        }
    }

    // is_prime is 0 for Prime...
    //is_prime is 1 for Composite...
    if (is_prime == 0){
        printf("Prime \n");
    }
    else{
        printf("Composite \n");
    }

  return 0;
}
