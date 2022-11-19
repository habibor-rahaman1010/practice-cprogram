/*

Divide Again!

You are given a positive even integer N. You want to divide the value among 3 people such that every person get the same amount.
 If it is not possible to give same amount to 3 people, print -1 otherwise print the amount.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    if(n % 2 == 0){
        if(n % 3 == 0){
            printf("%d", n / 3);
        }
        else{
            printf("%d", -1);
        }
    }
    else{
        printf("%d", -1);
    }


return 0;
}
