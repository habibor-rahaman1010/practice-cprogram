// array all element sort in c program;

#include <stdio.h>

int main() {
    int number[] = {32, 45, 67, 78, 90, 76, 34, 11, 29, 55};
    int i, j;
    int len = sizeof(number) / sizeof(number[0]);

    int tamp;
    for(i = 0; i < len; i++){
        for(j = 0; j < len; j++){
            if(number[i] < number[j]){
                tamp = number[i];
                number[i] = number[j];
                number[j] = tamp;
            }
        }
    }

    for(i = 0; i < len; i++){
        printf("%d ", number[i]);
    }

return 0;
}



