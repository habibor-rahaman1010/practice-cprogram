// input string name in c program....

#include <stdio.h>

int main() {
    char name[20]  = {"Habibor Rahaman"};
    name[15] = 'X';
    name[16] = 'Y';
    name[17] = 'Z';
    name[18] = '\0';


    printf("%s", name);


return 0;
}

