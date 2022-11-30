/*
You are given an integer n . Now print the sum of first n natural numbers.
For example n=5 , that means sum of first n natural number is 15(1+2+3+4+5) . Implement it using recursion.
*/

#include <stdio.h>

int recursion(int n) {

    if(n){
        printf("%d \n", n + recursion(n - 1));
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    recursion(n);

return 0;
}
