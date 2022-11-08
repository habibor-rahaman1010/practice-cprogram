// character in c program...

#include <stdio.h>

int main() {
    char ch[] = {'a', 'b', 'c', 'd', '\0'};

    printf("%c \n", ch[1]);
    char value = ch[0];

    printf("%c \n", value);

    printf("%c \n", ch[4]); //print null character...
    printf("%c \n", ch[3]);

return 0;
}

