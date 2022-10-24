//Write a C program to accept two integers and check whether they are equal or not...

#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the input of n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    if(n1 == n2){
        printf("They are equal.");
    }
    else{
        printf("They are not equal.");
    }

return 0;
}
