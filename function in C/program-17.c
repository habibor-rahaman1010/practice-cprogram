//factorial in c program...

#include <stdio.h>

int fact(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d \n", n, fact(n));

return 0;
}


int fact(int n) {
    int factorial = 1;

    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}
