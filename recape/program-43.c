// array all element print revers way in c program;

#include <stdio.h>

int main() {
    int number[] = {32, 45, 67, 78, 90, 76, 34, 11, 29, 55};
    int i, j;
    int len = sizeof(number) / sizeof(number[0]);

    int tamp;
    for(i = 0, j = len - 1 ; i < len; i++, j--){
        printf("%d ", number[j]);
    }

return 0;
}


