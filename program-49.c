//Write a C program to find the sum of the first 10 natural numbers.

#include <stdio.h>

int main() {
    int i, sum = 0;
    for(i = 1; i <= 10; i++){
        sum += i;
    }
    printf("Sum of the first 10 natural numbers is: %d", sum);

return 0;
}
