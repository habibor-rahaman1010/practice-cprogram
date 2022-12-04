//max and min find out in one function use pointer in c program...

#include <stdio.h>

void max_min(int num1, int num2, int *ptr1, int *ptr2) {
    if(num1 > num2){
        *ptr1 = num1;
        *ptr2 = num2;
    }
    else{
        *ptr2 = num2;
        *ptr1 = num1;
    }

}

int main() {
    int num1 = 2, num2 = 12;
    int x = 0, y = 0;

    max_min(num1, num2, &x, &y);
    printf("%d %d", x, y);

return 0;
}
