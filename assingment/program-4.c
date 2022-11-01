#include<stdio.h>

int main() {
    int n, sum = 0, m;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(n > 0){
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }

    printf("%d",sum);

return 0;
}
