//You are given an integer n . Now print n to 1 . Implement it using recursion.

#include <stdio.h>

int recursion(int n) {
    if(n > 0){
        printf("%d ", n);
        recursion(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    recursion(n);

return 0;
}

