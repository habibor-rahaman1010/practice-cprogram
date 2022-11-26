//prime number in c program...

#include <stdio.h>

int is_prime(int n) {
    if(n == 1 || n == 0){
       return 0;
    }

    int prime = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }
    return prime;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(is_prime(n)){
        printf("Prime \n");
    }
    else{
        printf("Not Prime \n");
    }

return 0;
}
