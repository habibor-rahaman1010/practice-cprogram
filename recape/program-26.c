// 2 + 4 + 6 + 8 + 10... sum in c program even number..

#include <stdio.h>

int main() {
    int i, sum = 0;
    i = 2;
    while(i <= 100) {
        sum += i;
        i += 2;
    }
    printf("Total sum is: %d", sum);

return 0;
}
