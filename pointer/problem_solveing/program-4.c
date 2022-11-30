//You are given an integer n . Now print n to 1 . Implement it using recursion.

#include <stdio.h>

void recursion(int n) {
    recursion(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    recursion(n);

return 0;
}
