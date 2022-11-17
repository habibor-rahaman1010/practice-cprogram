// 1 + 2 + 3 + 4 + 5 ... square summation in c program...

#include <stdio.h>
#include <math.h>

int main() {
    int i, sum = 0;
    i = 1;
    while(i <= 10) {
        sum += pow(i, 2);
        i++;
    }
    printf("Total sum is: %d", sum);

return 0;
}



