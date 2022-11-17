// 7 + 14 + 21 + 28... sum in c program

#include <stdio.h>

int main() {
    int i, sum = 0;
    i = 7;
    while(i <= 100) {
        sum += i;
        i += 7;
    }
    printf("Total sum is: %d", sum);

return 0;
}



