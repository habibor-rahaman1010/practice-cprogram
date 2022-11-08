// string in c program...

#include <stdio.h>

int main() {
    char name[25] = "Habibor Rahaman";
    name[15] = 'N';
    name[16] = '\0';

    printf("My name is %s", name);

return 0;
}

