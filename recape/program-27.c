// 1 + 3 + 5 + 7 + 9... sum in c program odd number..

#include <stdio.h>

int main() {
    int i, sum = 0;
    i = 1;
    while(i <= 100) {
        sum += i;
        i += 2;
    }
    printf("Total sum is: %d", sum);

return 0;
}

