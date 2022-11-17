// strchr in c program....

#include <stdio.h>
#include <string.h>

int main() {
    char messeage[] = "Hello programmer you always try to new problem solving, it\'s help to lot thinking.";

    printf("%s \n", strchr(messeage, 't'));
    printf("%s \n", strrchr(messeage, 't'));


return 0;
}
