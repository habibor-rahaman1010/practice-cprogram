// 1 + 2 + 3 + 4 +5... sum in c program...

#include <stdio.h>

int main() {
    int i, sum = 0;
    i = 1;
    while(i <= 100) {
        sum += i;
        i++;
    }
    printf("Total sum is: %d", sum);

return 0;
}
