// output print in c program...

#include <stdio.h>

int main() {
    int i = 14;
    float j = 7.234;
    char n = 'H';
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("%d \n", i);
    printf("%f \n", j);
    putchar(n);
    printf("\n");
    puts(name);


return 0;
}
