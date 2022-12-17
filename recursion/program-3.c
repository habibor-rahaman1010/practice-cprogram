// recursion in c program print n to 1...

#include <stdio.h>

void solve(int i, int n) {

    if(i > n) return;
    printf("%d \n", n);
    solve(1, n - 1);

}

int main() {
    int i, n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    solve(1, n);

return 0;
}


