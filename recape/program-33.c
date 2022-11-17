// 1 - 2 + 3 - 4 + 5 - 6 ... qube summation in c program...

#include <stdio.h>
#include <math.h>

int main() {
    int i, sum = 0;
    i = 1;
    while(i <= 15) {
        if(i % 2 != 0){
           sum += pow(i, 3);
        }
        else{
            sum -= pow(i, 3);
        }
        i++;
    }
    printf("Total sum is: %d", sum);

return 0;
}





