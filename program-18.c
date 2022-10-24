// Write a C program to find the largest of three numbers.

#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter value of 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3){
        printf("%d is the greatest among three numbers. \n", n1);
    }
    else if(n2 > n1 && n2 > n3){
       printf("%d is the greatest among three numbers. \n", n2);
    }
    else{
        printf("%d is the greatest among three numbers. \n", n3);
    }

return 0;
}
