// pointer in c program...

#include <stdio.h>

void my_func(int *ptr) {
    *ptr = 14;
return;
}

int main() {
    int num = 12;

    my_func(&num);
    printf("%d", num);

return 0;
}
