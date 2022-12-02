// pointer problem in c program...

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value id (x and y): ");
    scanf("%d %d", &x, &y);

    int *ptrX = &x, *ptrY = &y;
    *ptrX = x;
    *ptrY = y;

    printf("%d %d \n", *ptrX, *ptrY);

return 0;
}

