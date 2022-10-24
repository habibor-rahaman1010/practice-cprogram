//Write a C program to check whether a given number is positive or negative.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 0){
        printf("%d is positive number.", n);
    }
    else{
        printf("%d is negative number.", n);
    }

return 0;
}
