//pointer in c program...

#include <stdio.h>

int main() {
    int ara[10] = {12, 34, 35, 56, 67, 78, 87, 99, 43, 54};

    int i;
    int *p = ara;
    for(i = 0; i < 10; i++){
        printf("%d  %p  %d\n", *(p + i), (p + i), (p + i));
    }

return 0;
}

