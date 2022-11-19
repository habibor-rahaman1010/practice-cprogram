//check the number is prime or not in c program...

#include <stdio.h>

int is_prime(int p){
    int i, flag = 1;

    for(i = 2; i < p; i++){
        if(p % i == 0){
            flag = 0;
        }
    }
    return flag;
}

int main() {
    int n, prime;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    prime = is_prime(n);

    if(prime == 1){
        printf("%d is a prime number! \n", n);
    }
    else{
        printf("%d is not a prime number! \n", n);
    }


return 0;
}
