//function in c program...

#include <stdio.h>

int sum(int a , int b); // it's function prototype

int main() {
    int x = 34, y = 60;
    int result = sum(x, y);
    printf("%d \n", result);

return 0;
}

// function body..
int sum(int a , int b) {
    int sum = a + b;
}
