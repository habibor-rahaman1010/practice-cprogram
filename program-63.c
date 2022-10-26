/*
Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours
format). You need to print from N to M, if you need to start from beginning again, you can do that.
*/

#include <stdio.h>

int main() {
    int n, m, i;
    printf("Enter the value of (n and m): ");
    scanf("%d %d", &n, &m);

    if(n > 0 && n <= 24 && m > 0 && m <= 24){
        if(n < m){
            for(i = n; i <= m; i++){
                printf("%d ", i);
            }
        }
        else{
            while(1){
            if(n % 24 == m){
                printf("%d ", (n % 24));
                break;
            }
                printf("%d ", (n % 24));
                n++;
            }
        }
    }
    else{
        printf("Please give valid input (n > 0 && n <= 24 && m < 0 && m <= 24) \n");
    }


return 0;
}
