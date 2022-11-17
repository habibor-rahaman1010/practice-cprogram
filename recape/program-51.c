//string concatenation in c program...

#include <stdio.h>
#include <string.h>

int main() {
    char name1[] = "Habibor";
    char name2[] = " Rahaman";

    strncat(name1, name2, 4);
    puts(name1);


return 0;
}

