// write a c program to take a none negative integer as input and check if it is even or odd....

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d is even number! \n", n);
    }
    else{
        printf("%d is odd number! \n", n);
    }

return 0;
}
