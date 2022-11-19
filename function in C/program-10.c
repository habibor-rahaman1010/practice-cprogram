//check the number is prime or not in c program...

#include <stdio.h>

int is_prime(int p){

}

int main() {
    int n, prime;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    prime = is_prime(n);

    if(prime == 1){
        printf("%d is a prime number! \n");
    }
    else{
        printf("%d is not a prime number! \n");
    }


return 0;
}
