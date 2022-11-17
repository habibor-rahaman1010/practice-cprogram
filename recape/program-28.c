// 5 + 10 + 15 + 20... sum in c program

#include <stdio.h>

int main() {
    int i, sum = 0;
    i = 5;
    while(i <= 100) {
        sum += i;
        i += 5;
    }
    printf("Total sum is: %d", sum);

return 0;
}


