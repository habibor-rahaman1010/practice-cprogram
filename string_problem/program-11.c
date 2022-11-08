// input string name in c program....

#include <stdio.h>

int main() {
    char name[20]  = {"Habibor Rahaman"};
    name[14] = 'N';
    name[15] = 'X';
    name[16] = 'Y';
    name[17] = 'Z';
    name[18] = '.';
    name[19] = '\0';


    printf("%s \n", name);


return 0;
}


