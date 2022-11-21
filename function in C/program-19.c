//combination in c program....

#include <stdio.h>
#include <math.h>

int fact(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n, r;
    printf("Enter the value of (n and r): ");
    scanf("%d %d", &n, &r);

    int combination = fact(n) / (fact(n - r) * fact(r));
    printf("combination is nCr: %d \n", combination);

return 0;
}


