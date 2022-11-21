//permutation in c program....

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

    int permutation = fact(n) / fact(n - r);
    printf("Permutation is nPr: %d \n", permutation);

return 0;
}

