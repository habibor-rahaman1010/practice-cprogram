//max and min find out in one function use pointer in c program...

#include <stdio.h>

void max_min(int num1, int num2, int *ptr1, int *ptr2) {

    *ptr1 = num1 > num2 ? num1 : num2;
    *ptr2 = num2 < num1 ? num2 : num1;

}

int main() {
    int num1 = 32, num2 = 12;
    int large = 0, small = 0;

    max_min(num1, num2, &large, &small);
    printf("%d %d", large, small);

return 0;
}

