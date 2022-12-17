// summation in c program

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int sum = 0;
    for(i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("Total sum is: %d", sum);

return 0;
}
