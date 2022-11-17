// array all element revers way print in c program;

#include <stdio.h>

int main() {
    int number[] = {32, 45, 67, 78, 90, 76, 34, 11, 29, 55};
    int i, j;
    int len = sizeof(number) / sizeof(number[0]);

    for(i = len - 1 ; i >= 0; i--){
        printf("%d ", number[i]);
    }

return 0;
}

