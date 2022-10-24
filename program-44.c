//write a program which take a input n and total n summation give me....

#include <stdio.h>

int main() {
    int n, i, sum = 0, number;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the value of number: ");
        scanf("%d", &number);
        sum += number;
    }
    printf("Total summation is: %d", sum);

return 0;
}
