// recursion in c program print n to 1...

#include <stdio.h>

void solve(int n) {

    if(1 > n) return;
    printf("%d \n", n);
    solve(n - 1);

}

int main() {
    int i, n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    solve(n);

return 0;
}

