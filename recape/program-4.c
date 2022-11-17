// character input in c program....

#include <stdio.h>

int main() {
    printf("Enter your character: ");
    char ch = getchar();
    getchar(); //for empty space or enter when i input from user...
    char ch2 = getchar();


    printf("%c and %c", ch, ch2);

return 0;
}

