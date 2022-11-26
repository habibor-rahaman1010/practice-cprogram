// array all element summation in c program...

#include <stdio.h>

int add_array(int number[10]) {
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += number[i];
    }
    return sum;
}

int main() {
    int number[] = {34, 55, 67, 78, 98, 65, 23, 11, 56, 75};
    int ans = add_array(number);
    printf("Total sum is: %d", ans);

return 0;
}
