// recursion in c program print 1 to n...

#include <stdio.h>

void solve(int i, int n) {

    if(i > n) return;
    printf("%d \n", i);
    solve(i + 1, n);

}

int main() {
    int i, n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    solve(1, n);

return 0;
}
