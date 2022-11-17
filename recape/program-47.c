//string in c program....

#include <stdio.h>

int main() {
    char name[] = {'H', 'a', 'b', 'i', 'b', '.', '\0'};
    printf("%s \n", name);
    puts(name);

    char name2[] = "Habibor Rahaman.";
    printf("%s", name2);
    printf("\n");
    puts(name2);

return 0;
}
