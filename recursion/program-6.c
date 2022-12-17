//Sum of N Integers using Recursion

#include <stdio.h>

int sum(int i, int n) {

    if(i > n) return 0;
    int s = sum(i + 1, n);
    return s + i;

}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int s = sum(1, n);
    printf("Sum is %d", s);
return 0;
}
