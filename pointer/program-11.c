//pointer in c program...

#include <stdio.h>

int main() {
    int ara[10] = {12, 34, 35, 56, 67, 78, 87, 99, 43, 54};

    int i;
    for(i = 0; i < 10; i++){
        printf("%d  %p\n", *(ara + i), (ara + i));
    }

return 0;
}
