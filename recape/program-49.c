// string compare in c program...

#include <stdio.h>
#include <string.h>

int main() {
    char name1[] = "habibor rahaman";
    char name2[] = "habibor Rahamana";

    printf("%d \n", strcmp(name1, name2)); // if name1 is big return 32, if name1 and name2 is same return 0, if name2 is big return -32

    printf("%d \n", strncmp(name1, name2, strlen(name1)));

    printf("%d \n", strcasecmp(name1, name2));
return 0;
}

