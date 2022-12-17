// reveres in recursion in c program...
// recursion in c program print 1 to n...

#include <stdio.h>

void solve(int i, int n) {

    if(i > n) return;
    solve(1, n - 1);
    printf("%d \n", n);


}

int main() {
    int i, n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    solve(1, n);

return 0;
}

