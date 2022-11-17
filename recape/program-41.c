// array all element summation in c program;

#include <stdio.h>

int main() {
    int number[] = {32, 45, 67, 78, 90, 76, 34, 11, 29, 55};
    int sum = 0, i;
    int len = sizeof(number) / sizeof(number[0]);

    for(i = 0; i < len; i++){
        sum += number[i];
    }
    printf("sum of number is: %d", sum);

return 0;
}
