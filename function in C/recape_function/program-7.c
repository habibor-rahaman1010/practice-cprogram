// factorial ib c program use recursion...

#include <stdio.h>

int factorial(int n) {
    if(n > 0){
         return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("factorial is: %d", result);

return 0;
}

