//function in c program...

#include <stdio.h>

int sum(int a , int b) {
    int sum = a + b;
}

int main() {
    int x, y;
    printf("Enter value of a and b: ");
    scanf("%d %d", &x, &y);


    int result = sum(x, y);
    printf("%d \n", result);

return 0;
}

