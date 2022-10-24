//valid triangle validation in  c program....

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0){
        printf("YES Possible!");
    }
    else{
         printf("NO Possible!");
    }


return 0;
}

