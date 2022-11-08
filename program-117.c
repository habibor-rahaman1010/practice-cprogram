// character in c program...

#include <stdio.h>

int main() {
    char ch[] = {'a', 'b', 'c', 'd', '\0'};

    printf("%c \n", ch[1]);
    char value = ch[0];

    printf("%c", value);

    printf();

return 0;
}
