//Write a program in C to display the Square of the number up to given an integer...

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while(n >= i){
        printf("%d and Square of the %d is: %d \n", i, i, (i * i));

        i++;
    }


return 0;
}

