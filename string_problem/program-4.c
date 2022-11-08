//string in c program...

#include <stdio.h>

int main() {
    char name[] = "Habibor Rahaman.";
    printf("%s \n", name);

    printf("%c \n", name[0]);
    printf("%c \n", name[1]);
    printf("%c \n", name[2]);
    printf("%c \n", name[7]);
    printf("%c \n", name[8]);
    printf("%c \n", name[15]);

    //print there aschi value
    printf("%d \n", name[0]);
    printf("%d \n", name[1]);
    printf("%d \n", name[2]);
    printf("%d \n", name[7]);
    printf("%d \n", name[8]);
    printf("%d \n", name[15]);

return 0;
}
